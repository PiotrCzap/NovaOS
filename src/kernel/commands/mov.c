#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

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

    snprintf(full_command, sizeof(full_command), "mv \"%s\" \"%s\" 2>/dev/null", source, objective);

    int score = system(full_command);
    if (score == 0) {
        printf(GREEN "Success!\n");
        printf(WHITE "");
    } else {
        printf(RED "Error: mov failed to execute\n");
        printf(WHITE "");
    }
}