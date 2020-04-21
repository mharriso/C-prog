#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define WHITE   "\033[1;37m"
#define BLUE    "\033[1;36m"

int main()
{
    printf("%sYELLOW%s\n", YELLOW, RESET);
    printf("%sRED%s\n", RED, RESET);
    printf("%sWHITE%s\n", WHITE, RESET);
    printf("%sBLUE%s\n", BLUE, RESET);
}
