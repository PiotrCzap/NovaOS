#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void rem_cmd()
{
    char path[128];

    printf("Enter path to file: ");
    
    if (fgets(path, sizeof(path), stdin)) {
        path[strcspn(path, "\n")] = 0;

        if (remove(path) == 0) {
            printf("File '%s' deleted successfully.\n", path);
        } else {
            printf("Error: Could not delete file. Does it exist?\n");
        }
    }
}

void rem_with_flag_R()
{
    char path[128], command[256];
    printf("Path to remove: "); fgets(path, 128, stdin); path[strcspn(path, "\n")] = 0;
    sprintf(command, "rm -rf \"%s\"", path);
    system(command);
}