#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void ls_cmd()
{
    char root_folder[] = "root";
    char command[128];
    snprintf(command, sizeof(command), "ls %s", root_folder);
    system(command);
}
