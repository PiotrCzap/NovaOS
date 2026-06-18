#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mount.h>

int main()
{
    mkdir("root", 0777);
    mkdir("root/bin", 0777);
    mkdir("root/run", 0777);
    mkdir("root/boot", 0777);
    mkdir("root/tmp", 0777);
}