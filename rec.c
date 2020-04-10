#include <stdio.h>

void rec(int a)
{
	printf("%5d", a);
	if (a > 0)
		rec(a - 1);
}
int main()
{
	rec(10);
	return(0);
}
