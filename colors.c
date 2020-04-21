#include <stdio.h>

#define RESET   "\033[0m"  //все атрибуты по умолчанию
#define BLACK   "\033[30m"  //30-37 цвет текста
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#define BBLACK   "\033[40m" //40-47 цвет фона, background colors
#define BRED     "\033[41m"
#define BGREEN   "\033[42m"
#define BYELLOW  "\033[43m"
#define BBLUE    "\033[44m"
#define BMAGENTA "\033[45m"
#define BCYAN    "\033[46m"
#define BWHITE   "\033[47;30m" //комбинация двух параметров: черный текст на белом фоне

#define REVERSE  "\033[7;1m" /*жирный шрифт и реверсия, 
знаки приобретают цвет фона, а фон цвет знаков*/


int main()
{
    printf("%s***BLACK****%s\n", BLACK, RESET);
    printf("%s***RED******%s\n", RED, RESET);
    printf("%s***GREEN****%s\n", GREEN, RESET);
    printf("%s***YELLOW***%s\n", YELLOW, RESET);
    printf("%s***BLUE*****%s\n", BLUE, RESET);
    printf("%s***MAGENTA**%s\n", MAGENTA, RESET);
    printf("%s***CYAN*****%s\n", CYAN, RESET);
    printf("%s***WHITE****%s\n", WHITE, RESET);

    printf("%s***BLACK****%s\n", BBLACK, RESET);
    printf("%s***RED******%s\n", BRED, RESET);
    printf("%s***GREEN****%s\n", BGREEN, RESET);
    printf("%s***YELLOW***%s\n", BYELLOW, RESET);
    printf("%s***BLUE*****%s\n", BBLUE, RESET);
    printf("%s***MAGENTA**%s\n", BMAGENTA, RESET);
    printf("%s***CYAN*****%s\n", BCYAN, RESET);
    printf("%s***WHITE****%s\n", BWHITE, RESET);

    printf("%s***REVERSE**%s\n", REVERSE, RESET);
    
}
