#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

static void print_gpu()
{
    FILE *fp;
    char gpu_name[128] = "Nieznane GPU";
    char vram_line[128] = "";
    int vram_gb = 0;

    fp = popen("lspci | grep -E \"VGA|3D\" | sed -n 's/.*\\[\\(.*\\)\\].*/\\1/p' | head -n 1", "r");
    if (fp != NULL) {
        if (fgets(gpu_name, sizeof(gpu_name), fp) != NULL) {
            gpu_name[strcspn(gpu_name, "\n")] = 0;
        }
        pclose(fp);
    }

    fp = popen("cat /sys/class/drm/card0/device/mem_info_vram_total 2>/dev/null", "r");
    if (fp != NULL && fgets(vram_line, sizeof(vram_line), fp) != NULL) {
        long long vram_bytes = atoll(vram_line);
        vram_gb = (int)((vram_bytes + (1024LL * 1024 * 512)) / (1024LL * 1024 * 1024));
        pclose(fp);
    } else {
        if (fp) pclose(fp);
        
        fp = popen("nvidia-smi --query-gpu=memory.total --format=csv,noheader,nounits 2>/dev/null", "r");
        if (fp != NULL && fgets(vram_line, sizeof(vram_line), fp) != NULL) {
            int vram_mb = atoi(vram_line);
            vram_gb = (vram_mb + 511) / 1024;
            pclose(fp);
        } else {
            if (fp) pclose(fp);
            
            fp = popen("glxinfo 2>/dev/null | grep -i \"video memory\" | awk '{print $(NF-1)}'", "r");
            if (fp != NULL && fgets(vram_line, sizeof(vram_line), fp) != NULL) {
                int vram_mb = atoi(vram_line);
                vram_gb = (vram_mb + 511) / 1024;
                pclose(fp);
            } else if (fp) {
                pclose(fp);
            }
        }
    }

    
    printf(GREEN "GPU: ");
    printf(WHITE "");
    printf(gpu_name);
    printf(WHITE " VRAM: %d GB\n", vram_gb);
}

static void print_ram()
{
    struct sysinfo info;

    if (sysinfo(&info) == 0) {
        unsigned long long unit = info.mem_unit;
        unsigned long long totalBytes = (unsigned long long)info.totalram * unit;
        unsigned long long freeBytes = (unsigned long long)info.freeram * unit;
        unsigned long long bufferBytes = (unsigned long long)info.bufferram * unit;
        unsigned long long usedBytes = totalBytes - (freeBytes + bufferBytes);

        double usedGiB = (double)usedBytes / (1024 * 1024 * 1024);
        double totalGiB = (double)totalBytes / (1024 * 1024 * 1024);

        int percentage = (int)(((double)usedBytes / totalBytes) * 100);

        printf(GREEN"Memory: " WHITE"%.2f GiB / %.2f GiB (%d%%)\n", usedGiB, totalGiB, percentage);
    } else {
        perror("Error: Cannot read ram");
    }
}

void about_cmd()
{
    printf(GREEN "OS: " WHITE "NovaOS v0.0.1" RESET "\n");
    printf(GREEN "Kernel: " WHITE "NovaOS Kernel v0.0.1" RESET "\n");
    print_ram();
    print_gpu();
}