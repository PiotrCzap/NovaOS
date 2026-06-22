#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

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