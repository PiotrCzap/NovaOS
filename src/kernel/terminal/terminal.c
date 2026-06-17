#include "../../drivers/display/display.h"
#include "../../drivers/lib/lib.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "../commands.h"

void *init_commands(char command[])
{
    
if (strcmp(command, "about") == 0)
{
    about_cmd();
}

if (strcmp(command, "clear") == 0)
{
    clear();
}

if (strcmp(command, "mkfile") == 0)
{
    mkfile_cmd();
}

if (strcmp(command, "mkdir") == 0)
{
    mkdir_cmd();
}

if (strcmp(command, "help") == 0)
{
    help_cmd();
}

}

void init_terminal()
{
    while (1)
    {
        input();
    }
    
}