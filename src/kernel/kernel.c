#include "../drivers/lib/lib.h"
#include "../drivers/display/display.h"
#include "../drivers/keyboard/keyboard.h"
#include "terminal/terminal.h"

char sys_ver[] = "0.0.1";

struct kernel
    {
        char version[64];


        char display_driver[32];
    };
    struct kernel kernel;

void create_config_file(char config_filename[])
{
    FILE *KERNEL_CONFIG_FILE = fopen(config_filename, "w");

    if (KERNEL_CONFIG_FILE != NULL)
    {
        strcpy(kernel.version, "kernel-version 0.0.1");
        fprintf(KERNEL_CONFIG_FILE, "%s\n", kernel.version);
    }
    fclose(KERNEL_CONFIG_FILE);
}

void create_log_file(char log_filename[])
{
    FILE *LOG_FILE = fopen(log_filename, "w");

    if (LOG_FILE != NULL)
    {
        fprintf(LOG_FILE, "%s\n", sys_ver);
    }
    
}

void read_config_file(char config_filename[])
{
    FILE *KERNEL_CONFIG_FILE = fopen(config_filename, "r");
}

void read_log_file(char log_filename[])
{
    FILE *LOG_FILE = fopen(log_filename, "r");

}

void init()
{
    write_text(0, 0, WHITE "Welcome in NovaOS");
    write_text(0, 1, WHITE "Version: ");
    write_text(0, 0, sys_ver);
    init_terminal();
    write_text(0, 1, RED "CZERWONY TEKST");
    write_text(0, 1, GREEN "ZIELONY TEKST");
    write_text(0, 1, YELLOW "ŻÓŁTY TEKST");
    write_text(0, 1, ORANGE "POMARAŃCZOWY TEKST");
    write_text(0, 1, BLUE "NIEBIESKI TEKST");
    write_text(0, 1, WHITE "BIAŁY TEKST");
}


