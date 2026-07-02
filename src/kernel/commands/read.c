#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void read_cmd() {
    printf("path or filename to file: ");
    
    char *PATH[128];
    fgets(PATH, 128, stdin);

    size_t len = strlen(PATH);
    if (len > 0 && PATH[len - 1] == '\n') {
        PATH[len - 1] = '\0';
    }

    char *cmd[256];
    sprintf(cmd, "cat \"%s\"", PATH);

    int result = system(cmd);
    
    if (result != 0) {
        printf(RED "Error: Could not find or read file at that path." RESET "\n");
    }
}