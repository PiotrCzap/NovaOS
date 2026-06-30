#include "../../drivers/display/display.h"
#include "../../drivers/lib.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "../commands/commands.h"

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
if (strcmp(command, "ls") == 0)
{
    ls_cmd();
}

if (strcmp(command, "mov") == 0)
{
    mov_cmd();
}
if (strcmp(command, "run") == 0)
{
    run_cmd();
}
if (strcmp(command, "copy") == 0)
{
    copy_cmd();
}
if (strcmp(command, "rem") == 0)
{
    rem_cmd();
}
if (strcmp(command, "rem -R") == 0)
{
    rem_with_flag_R();
}
if (strcmp(command, "read") == 0)
{
    read_cmd();
}


}

void init_terminal()
{
    while (1)
    {
        input();
    }
    
}