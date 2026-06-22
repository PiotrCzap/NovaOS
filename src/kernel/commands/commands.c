#include "../terminal/terminal.h"
#include "../../drivers/lib.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../../drivers/display/display.h"
#include "../memory/memory.h"

void help_cmd()
{
    printf(GREEN "help" RED " -> " BLUE "prints all system commands" RESET "\n");
    printf(GREEN "about" RED " -> " BLUE "prints all information about your pc" RESET "\n");
    printf(GREEN "clear" RED " -> " BLUE "cleans terminal" RESET "\n");
    printf(GREEN "mkfile" RED " -> " BLUE "creates new file" RESET "\n");
    printf(GREEN "mkdir" RED " -> " BLUE "creates new folder" RESET "\n");
    printf(GREEN "ls" RED " -> " BLUE "lists all files and folders" RESET "\n");
}

void about_cmd()
{
    printf(GREEN "OS: " WHITE "NovaOS v0.0.1" RESET "\n");
    printf(GREEN "Kernel: " WHITE "NovaOS Kernel v0.0.1" RESET "\n");
}

void mkfile_cmd()
{
    printf("ENTER FILENAME WITH EXTENSION: ");
    
    char FILENAME[32];
    fgets(FILENAME, 32, stdin);

    size_t len = strlen(FILENAME);
    if (len > 0 && FILENAME[len - 1] == '\n') {
        FILENAME[len - 1] = '\0';
    }

    FILE *new_file = fopen(FILENAME, "w");
    
    if (new_file != NULL)
    {
        printf(GREEN "File Created" RESET "\n");
        fclose(new_file);
    }
    else
    {
        printf(RED "Error cannot create file" RESET "\n");
    }
}

void mkdir_cmd()
{
    printf("ENTER FOLDER NAME: ");

    char DIRNAME[32];
    fgets(DIRNAME, 32, stdin);

    size_t len = strlen(DIRNAME);
    if (len > 0 && DIRNAME[len - 1] == '\n') {
        DIRNAME[len - 1] = '\0';
    }

    if (mkdir(DIRNAME, 0777) == 0)
    {
        printf(GREEN "Directory Created" RESET "\n");
    }
    else
    {
        printf(RED "Error cannot create directory" RESET "\n");
    }
}

void ls_cmd()
{
    char root_folder[] = "root";
    char command[128];
    snprintf(command, sizeof(command), "ls %s", root_folder);
    system(command);
}

void mov_cmd()
{
    char source[256];
    char objective[256];
    char full_command[512];
    int len;

    printf(WHITE "type file path to move: ");
    fflush(stdout);
    fgets(source, sizeof(source), stdin);
    
    len = strlen(source);
    while (len > 0 && isspace((unsigned char)source[len - 1])) {
        source[len - 1] = '\0';
        len--;
    }

    printf(WHITE "type path where this file or folder want to move: ");
    fflush(stdout);
    fgets(objective, sizeof(objective), stdin);

    len = strlen(objective);
    while (len > 0 && isspace((unsigned char)objective[len - 1])) {
        objective[len - 1] = '\0';
        len--;
    }

    snprintf(full_command, sizeof(full_command), "mv \"%s\" \"%s\"", source, objective);

    int wynik = system(full_command);
    if (wynik == 0) {
        printf(GREEN "Success!\n");
        printf(WHITE "");
    } else {
        printf(RED "Error: mov failed to execute.\n");
    }
}