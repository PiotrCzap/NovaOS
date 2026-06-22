#include "../lib.h"
#include "../display/display.h"
#include "../../kernel/kernel.h"
#include "../../kernel/commands/commands.h"
#include "../../kernel/terminal/terminal.h"

static int max_chars = 128;

// Input Function
void input()
{
    printf(">");
    char typed_command[max_chars];
    fgets(typed_command, max_chars, stdin);
    
    size_t len = strlen(typed_command);
    if (len > 0 && typed_command[len - 1] == '\n') {
        typed_command[len - 1] = '\0';
    }
    
    init_commands(typed_command);
}