#include "../../drivers/lib.h"
#include "../../drivers/display/display.h"
#include "../../drivers/keyboard/keyboard.h"
#include "../kernel.h"
#include "commands.h"

void ping_cmd()
{
    char input[128];
    char command[16];
    printf("enter what you want to ping [google.com]: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    snprintf(command, sizeof(command), "ping %s", input);
    system(command);
}
