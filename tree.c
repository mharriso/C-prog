#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define RESET   "\033[0m"  //все атрибуты по умолчанию
#define BLACK   "\033[30m"  //30-37 цвет текста
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33;1m"
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


void tree(int n)
{
	char spaces[n + 1];
	sprintf(spaces, "%*s", n, "");

	printf(YELLOW"%*s%s\n", n + 1, "*", RESET);

	for(int i = 0; i < n; i++)
	{
		sprintf(spaces, "%*s", n - i, "");
		printf("%s", spaces);
		for(int j = 0; j < i * 2 + 1; j++)
		{
			printf(BGREEN" "RESET);
		}
		printf("\n");
	}
	sprintf(spaces, "%*s", n - 1, "");
	printf("%s%s%s%s\n", spaces, BYELLOW, "   ", RESET);
	printf("%s%s%s%s\n\n", spaces, BYELLOW,  "   ", RESET);

}
int main()
{
	for(int i = 0; i < 1; i++)
		tree(10);
	return (0);
}
