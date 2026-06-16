#include "../drivers/lib/lib.h"
#include "kernel.h"


void init_ram_disk_allocate(char FILENAME[])
{

    mkdir("logs", 0777);
    mount("tmpfs", "logs", "tmpfs", 0, "");
    

}