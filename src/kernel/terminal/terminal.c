#include "../../drivers/display/display.h"
#include "../../drivers/lib/lib.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "../commands.h"

void *init_commands(char command[])
{
    
if (strcmp(command, "about") == 0 || strcmp(command, "About") == 0)
{
    about_cmd();
}

if (strcmp(command, "clear") == 0 || strcmp(command, "Clear") == 0)
{
    clear();
}

if (strcmp(command, "mkfile") == 0 || strcmp(command, "Mkfile") == 0)
{
    mkfile_cmd();
}

if (strcmp(command, "mkdir") == 0 || strcmp(command, "Mkdir") == 0)
{
    mkdir_cmd();
}

if (strcmp(command, "help") == 0 || strcmp(command, "Help") == 0)
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