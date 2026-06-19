#include <stdio.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include "../drivers/lib/lib.h"
#include "kernel.h"
#include "../drivers/display/display.h"

void create_log_file(char filename[], char DATA[])
{

    char file_path[256];
    snprintf(file_path, sizeof(file_path), "logs/%s", filename);

    // Otwieramy PRAWDZIWY plik na zamontowanym RAM-dysku (tmpfs)
    FILE *log_file = fopen(file_path, "w");
    
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