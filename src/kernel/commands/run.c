#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void run_cmd()
{
    printf("type path to exectuable file: ");
    char path_input[128];

    fgets(path_input, sizeof(path_input), stdin);
    system(path_input);
}