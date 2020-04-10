#include <stdio.h>

int fibo(int num)
{
	if (num == 0)
		return (0);
	if (num == 1)
		return (1);
	return fibo(num - 1) + fibo(num - 2);
}

int main()

{
	int in;
	printf("Введите число:");
	scanf("%d", &in);
	for (int i = 0; i < in; i++)
		printf("%3d", fibo(i));
	return(0);
}
