#include "terminal/terminal.h"
#include "../drivers/lib/lib.h"
#include "../drivers/keyboard/keyboard.h"
#include "../drivers/display/display.h"

void help_cmd()
{
    write_text(0, 0, GREEN "Help "); write_text(1, 0, RED "-> ");  write_text(1, 0, BLUE "prints all system commands");
    write_text(0, 1, GREEN "About "); write_text(1, 0, RED "-> ");  write_text(1, 0, BLUE "prints all information about your pc");
    write_text(0, 1, GREEN "Clear "); write_text(1, 0, RED "-> ");  write_text(1, 0, BLUE "cleans terminal");
    write_text(0, 1, GREEN "Mkfile "); write_text(1, 0, RED "-> ");  write_text(1, 0, BLUE "creates new file");
    write_text(0, 1, GREEN "Mkdir "); write_text(1, 0, RED "-> ");  write_text(1, 0, BLUE "creates new folder");
    write_text(0, 0, WHITE "");
}

void about_cmd()
{
    write_text(0, 0, GREEN "OS:"); write_text(1, 0, WHITE "NovaOS v0.0.1");
    write_text(0, 1, GREEN "Kernel:"); write_text(1, 0, WHITE "NovaOS Kernel v0.0.1");
}

void mkfile_cmd()
{
    write_text(0, 0, "ENTER FILENAME WITH EXTENSION: ");
    
    char FILENAME[32];

    fgets(FILENAME, 32, stdin);

    size_t len = strlen(FILENAME);
    if (len > 0 && FILENAME[len - 1] == '\n') {
        FILENAME[len - 1] = '\0';
    }


    FILE *new_file = fopen(FILENAME, "w");
    
    if (new_file != NULL)
    {
        write_text(0, 0, GREEN "File Created");
        fclose(new_file);
    }
    else
    {
        write_text(0, 0, RED "Error cannot create file");
    }
}

void mkdir_cmd()
{
    write_text(0, 0, "ENTER FOLDER NAME: ");

    char DIRNAME[32];

    fgets(DIRNAME, 32, stdin);

    size_t len = strlen(DIRNAME);
    if (len > 0 && DIRNAME[len - 1] == '\n') {
        DIRNAME[len - 1] = '\0';
    }

    if (mkdir(DIRNAME, 0777) == 0)
    {
        write_text(0, 0, GREEN "Directory Created");
    }
    else
    {
        write_text(0, 0, RED "Error cannot create directory");
    }
}