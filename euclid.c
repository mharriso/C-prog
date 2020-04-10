#include <stdio.h>
#include <stdlib.h>

int nod(int a, int b)
{
	return (b == 0) ? a : nod(b, a%b);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d\n", nod(a, b));
	}

	return(0);
}
