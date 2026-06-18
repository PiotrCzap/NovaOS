#include "../drivers/lib/lib.h"
#include "kernel.h"
#include "../drivers/display/display.h"

void create_log_file(char filename[], char DATA[])
{
    char ram_buffer[1024];

    FILE *log_file = fmemopen(ram_buffer, sizeof(ram_buffer), "w");
    
    if (log_file == NULL)
    {
        return;
    }
    fputs(DATA, log_file);
    
    fclose(log_file);
}

void init_ram_disk_allocate(char FILENAME[])
{

    mkdir("logs", 0777);
    mount("tmpfs", "logs", "tmpfs", 0, "");
    
    create_log_file(FILENAME, "pliczek stoliczek");
}