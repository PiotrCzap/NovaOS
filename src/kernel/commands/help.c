#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void help_cmd()
{
    printf(GREEN "help" RED " -> " BLUE "prints all system commands" RESET "\n");
    printf(GREEN "about" RED " -> " BLUE "prints all information about your pc" RESET "\n");
    printf(GREEN "clear" RED " -> " BLUE "cleans terminal" RESET "\n");
    printf(GREEN "mkfile" RED " -> " BLUE "creates new file" RESET "\n");
    printf(GREEN "mkdir" RED " -> " BLUE "creates new folder" RESET "\n");
    printf(GREEN "ls" RED " -> " BLUE "lists all files and folders" RESET "\n");
}