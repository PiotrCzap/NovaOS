#include "../drivers/lib/lib.h"
#include "kernel.h"


void init_ram_disk_allocate(char FILENAME[])
{
    mkdir("logs", 0777);
    mount("tmpfs", "logs", "tmpfs", 0, "");

    char full_path[64];

    sprintf(full_path, "logs/%s", FILENAME);

    create_log_file(full_path);

    mkdir("config", 0777);
    mount("tmpfs", "config", "tmpfs", 0, "");

    sprintf(full_path, "config/%s", FILENAME);

    create_config_file(full_path);
}