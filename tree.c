#include <stdio.h>
#include <unistd.h>
#include <string.h>
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


void tree(int n, char *shift)
{
	char *spaces;
	asprintf(&spaces, "%*s", n, "");

	printf(YELLOW"%s%*s%s\n", shift, n + 1, "*", RESET);
	printf(YELLOW"%s%*s%s\n", shift, n + 2, "***", RESET);

	for(int i = 0; i < n; i++)
	{
		asprintf(&spaces, "%s%*s", shift, n - i, "");
		printf("%s", spaces);
		for(int j = 0; j < i * 2 + 1; j++)
			printf(BGREEN" "RESET);
		printf("\n");
	}
	asprintf(&spaces, "%s%*s", shift, n - 1, "");
	printf("%s%s%s%s\n", spaces, BYELLOW, "   ", RESET);
	printf("%s%s%s%s\n", spaces, BYELLOW, "   ", RESET);

}
int main()
{
	int n = 10;
	char *shift;
	for(int i = 0; i < 5000; i++)
	{

		sprintf(shift,"%*s", n * i%6 * n * 3, "");
		tree(n, shift);
		sleep(1);
	}
	return (0);
}
