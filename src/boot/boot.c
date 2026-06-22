#include "../drivers/lib.h"
#include "../drivers/display/display.h"
#include "../kernel/kernel.h"
#include "../drivers/timer/timer.h"

void init_boot()
{
    printf("Loading Drivers...\n");
    timer(1);
    printf("Loading Drivers [ " GREEN "OK" WHITE " ]\n");
    timer(1);
    printf("Loading Kernel...\n");
    timer(1);
    printf("Loading Kernel [ " GREEN "OK" WHITE " ]\n");
    timer(1);
    printf("Loading Terminal...\n");
    timer(1);
    printf("Loading Terminal [ " GREEN "OK" WHITE " ]\n");
    timer(1);
    system("clear");
    init();
}




int main()
{
    init_boot();
}