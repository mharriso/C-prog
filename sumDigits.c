#include <stdio.h>

int sumDigitsRecursive(int num)//решение рекурсией, здесь не нужно вводить доп переменную
{
	if (num > 0)
		return num%10 + sumDigitsRecursive(num/10);
	else
		return 0;
}
int sumDigitsRecursive2(int num)//в одну строку, благодаря тернальному оператору
{
	return (num > 0) ? (num%10 + sumDigitsRecursive2(num/10)) : 0;
	//проверяется условие, затем вызывается рекурсия если оно выполнилось, либо 0 если нет
}

int sumDigitsIteractive(int num)//итеративный способ
{
	int sum = 0;
	while (num > 0)
	{
		sum = sum + num%10;
		num = num/10;
	}
	return (sum);
}
int main ()

{
	int n;
	printf("Введи, пожалуйста, число: ");
	scanf("%d", &n);
	printf("%d\n", sumDigitsIteractive(n));
	printf("%d\n", sumDigitsRecursive(n));
	printf("%d\n", sumDigitsRecursive2(n));
	return(0);
}
