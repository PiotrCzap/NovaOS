#include "display.h"
#include "../lib/lib.h"

void write_text(int x, int y, char text[])
{
    for (size_t ix = 0; ix < x; ix++)
    {
        printf(" ");
    }
    for (size_t iy = 0; iy < y; iy++)
    {
        printf("\n");
    }
    printf("%s", text);
    fflush(stdout);
    
}

void clear()
{
    system("clear");
}

void timer(float time)
{
    sleep(time);
}