#include "../drivers/lib/lib.h"
#include "../drivers/display/display.h"
#include "../drivers/keyboard/keyboard.h"
#include "terminal/terminal.h"
#include "memory.h"

char sys_ver[] = "0.0.1";

void init()
{
    write_text(0, 0, WHITE "Welcome in NovaOS");
    write_text(0, 1, WHITE "Version: ");
    write_text(0, 0, sys_ver);
    init_terminal();
    init_ram_disk_allocate("plik.txt");
    
}


