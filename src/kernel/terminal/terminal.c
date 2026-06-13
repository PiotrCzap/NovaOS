#include "../../drivers/display/display.h"
#include "../../drivers/lib/lib.h"
#include "../../drivers/keyboard/keyboard.h"
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
    write_text(0, 1, "ENTER FILENAME WITH EXTENSION: ");
    
    char FILENAME[32];

    fgets(FILENAME, 32, stdin);

    size_t len = strlen(FILENAME);
    if (len > 0 && FILENAME[len - 1] == '\n') {
        FILENAME[len - 1] = '\0';
    }


    FILE *new_file = fopen(FILENAME, "w");
    
    if (new_file != NULL)
    {
        write_text(0, 0, "File Created");
        fclose(new_file);
    }
    else
    {
        write_text(0, 0, "Error cannot create file");
    }
}


}

void init_terminal()
{
    while (1)
    {
        input();
    }
    
}