#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void copy_cmd()
{
    char src[128], dest[128];
    char command[300];
    printf("path to file: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = 0;
    printf("path to paste: ");
    fgets(dest, sizeof(dest), stdin);
    dest[strcspn(dest, "\n")] = 0;
    sprintf(command, "cp \"%s\" \"%s\"", src, dest);
    int result = system(command);
    if (result == 0) {
        printf("Success: File copied!\n");
    } else {
        printf("Error: Could not copy file. Check paths.\n");
    }
}