#include <stdio.h>

#define RED_TEXT "\033[1;31m"
#define BLUE_TEXT "\033[1;34m"
#define MAGENTA_TEXT "\033[1;35m"
#define GREEN_TEXT "\033[1;32m"
#define NORMAL_TEXT "\033[0m"

typedef char *string;

void println(string line)
{
    printf("%s\n", line);
}