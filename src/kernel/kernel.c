#include "../drivers/lib.h"
#include "../drivers/display/display.h"
#include "commands/commands.h"
#include "terminal/terminal.h"

char system_version[] = "0.0.1"; // zmienna wersji systemu

void init()
{
    printf("Welcome in NovaOS!\n");
    printf("Version: %s\n", system_version);
    init_terminal();
}