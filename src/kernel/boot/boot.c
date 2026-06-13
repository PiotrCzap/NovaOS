#include "../drivers/lib/lib.h"
#include "../drivers/display/display.h"
#include "../kernel.h"

int status;

void init_boot()
{
    clear();

    write_text(0, 0, "Loading Drivers");

    timer(1);

    write_text(0, 1, "Loading Drivers");
    write_text(1, 0, "[");
    write_text(1, 0, GREEN "OK");
    write_text(1, 0, WHITE "]");

    timer(1);

    write_text(1, 1, "Loading Kernel");
    create_config_file("kernel.init");
    status = 1;

    if (status == 1) 
    {
        status = 0;
    }

    write_text(0, 1, "Loading Kernel");
    write_text(1, 0, "[");
    write_text(1, 0, GREEN "OK");
    write_text(1, 0, WHITE "]");

    timer(1);
    clear();

    init();
}


int main()
{
    init_boot();
}