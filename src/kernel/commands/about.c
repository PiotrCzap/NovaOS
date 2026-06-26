#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void print_ram()
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
}