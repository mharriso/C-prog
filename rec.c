#include <stdio.h>

void rec(int a)
{
	printf("%5d", a);
	if (a > 0)
		rec(a - 1);
}
int main()
{
	int n;
	printf("%s", "Введи, пожалуйста, число: ");
	scanf("%d", &n);

	rec(n);
	return(0);
}
