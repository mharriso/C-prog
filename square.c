#include <stdio.h>
#define RESET   "\033[0m"  //все атрибуты по умолчанию
#define BBLACK   "\033[40m" //40-47 цвет фона, background colors
#define BRED     "\033[41m"
#define BGREEN   "\033[42m"
#define BYELLOW  "\033[43m"
#define BBLUE    "\033[44m"
#define BMAGENTA "\033[45m"
#define BCYAN    "\033[46m"
#define BWHITE   "\033[47;30m"

int square(int n)
	
{
	for(int y = 0; y<=n; y++)
	{
		for(int x = 0; x<=n; x++)
		{
		if ((y==0||y==n)&&(x>=0&&x<=n))
			printf("%s  %s", BMAGENTA, RESET);
		else if ((y>=0&&y<=n)&&(x==0||x==n))
			printf("%s  %s", BMAGENTA, RESET);

		else if ((y==1||y==n-1)&&(x>0&&x<n))
			printf("%s  %s", BWHITE, RESET);
                else if ((y>0&&y<n)&&(x==1||x==n-1))
                	printf("%s  %s", BWHITE, RESET);

		else if ((y==2||y==n-2)&&(x>1&&x<n-1))
			printf("%s  %s", BCYAN, RESET);
                else if ((y>1&&y<n-1)&&(x==2||x==n-2))
                	printf("%s  %s", BCYAN, RESET);

		else if ((y==3||y==n-3)&&(x>2&&x<n-2))
                        printf("%s  %s", BRED, RESET);
                else if ((y>2&&y<n-2)&&(x==3||x==n-3))
                        printf("%s  %s", BRED, RESET);

		else if ((y==5||y==n-5)&&(x>4&&x<n-4))
			printf("%s  %s", BBLUE, RESET);
                else if ((y>4&&y<n-4)&&(x==5||x==n-5))
                	printf("%s  %s", BBLUE, RESET);

		else
			printf("%s  %s", BYELLOW, RESET);
		}
	printf("\n");
	}
	printf("\n");
	return(0);
}

int main()
{
	int n;
	printf("Привет! Нарисуем квадрат\nВведи его размер: ");
	scanf("%d", &n);
	printf("\n");
	if (n > 0)
		square(n);
	return(0);
}

