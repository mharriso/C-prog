#include <stdio.h>

int shortfac(int n)
{
  return (n < 2) ? 1 : n * factorial (n - 1);
}

int recfac(int n)
{
	if (n <= 0)
		return 1;
	return n * recfac(n - 1);
}

int iterfac(int n)
{
	if (n <= 0)
	return 1;
	int res = 1;
	for (int i = 1; i <= n; ++i)
        {
	res = res*i;
        }
	return res;
}


int main()
{
	int in;
	printf("%s", "Введи, пожалуйста, число: ");
	scanf("%d", &in);
	printf("%d\n", recfac(in));
	printf("%d\n", iterfac(in));
	printf("%d\n", shortfac(in));
	return(0);
}
	
