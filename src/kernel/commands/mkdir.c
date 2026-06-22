#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

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