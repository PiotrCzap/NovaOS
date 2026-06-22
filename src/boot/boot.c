#include "../drivers/lib.h"
#include "../drivers/display/display.h"
#include "../kernel/kernel.h"

void init_boot()
{
    printf("Loading Drivers...\n");
    printf("Loading Drivers [ " GREEN "OK" WHITE " ]\n");
    printf("Loading Kernel...\n");
    printf("Loading Kernel [ " GREEN "OK" WHITE " ]\n");
    printf("Loading Terminal...\n");
    printf("Loading Terminal [ " GREEN "OK" WHITE " ]\n");
    system("clear");
    init();
}




int main()
{
    init_boot();
}