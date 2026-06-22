#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void about_cmd()
{
    printf(GREEN "OS: " WHITE "NovaOS v0.0.1" RESET "\n");
    printf(GREEN "Kernel: " WHITE "NovaOS Kernel v0.0.1" RESET "\n");
}