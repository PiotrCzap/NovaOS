#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void cd_cmd()
{
    char path[256];

    printf("type path: ");
    
    if (fgets(path, sizeof(path), stdin) != NULL) {
        
        size_t len = strlen(path);
        if (len > 0 && path[len - 1] == '\n') {
            path[len - 1] = '\0';
        }

        if (chdir(path) == 0) {
            printf("Changed directory to: %s\n", path);
        } else {
            perror("Error: path dosen't exist or path is invalid");
        }
    }
}