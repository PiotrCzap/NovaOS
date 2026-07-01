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
    printf(GREEN "mov" RED " -> " BLUE "moves files or folders to other path or disk" RESET "\n");
    printf(GREEN "run" RED " -> " BLUE "runs executable files like .exe" RESET "\n");
    printf(GREEN "rem" RED " -> " BLUE "removes file" RESET "\n");
    printf(GREEN "rem -R" RED " -> " BLUE "removes folder and files on this folder" RESET "\n");
    printf(GREEN "read" RED " -> " BLUE "reads files like .txt" RESET "\n");
    printf(GREEN "ping" RED " -> " BLUE "pings websites" RESET "\n");
}