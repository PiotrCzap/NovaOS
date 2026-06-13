#include "../drivers/display/display.h"
#include "../drivers/lib/lib.h"
#include "../drivers/keyboard/keyboard.h"
#include "../kernel.h"

void *init_commands(char command[])
{
    
if (strcmp(command, "about") == 0 || strcmp(command, "About") == 0)
{
    write_text(0, 0, "OS: NovaOS");
    write_text(0, 1, "Version: 0.0.1");
    write_text(0, 2, "Kernel: Nova_Kernel-v0.0.1");
}
if (strcmp(command, "clear") == 0 || strcmp(command, "Clear") == 0)
{
    clear();
}
if (strcmp(command, "mkfile") == 0 || strcmp(command, "Mkfile") == 0)
{
    write_text(0, 1, "ENTER FILENAME WITH EXTENSION");
    
}


}

void init_terminal()
{
    while (1)
    {
        input();
    }
    
}