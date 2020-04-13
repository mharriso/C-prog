#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int printPyramid(int n)
{

	int y = 1;
	while (y <= n)
	{
		char spaces[n];
		sprintf(spaces, "%%%dd", n + 2 - y);
		printf(spaces, y);
		int x = y - 1;
		while (x != 0)
	    {
			printf("%2d", y);
			x--;
		}
		printf("\n");
		y++;
	}
	return (0);

}
int printRevPyramid(int n)
{
    n = abs(n);
	int y = 1;
	while (y <= n)
	{
		char spaces[n];
		sprintf(spaces, "%%%dd", y + 2);
		printf(spaces, y);
		int x = n - y;
		while (x != 0)
	    {
			printf("%2d", y);
			x--;
		}
		printf("\n");
		y++;
	}
	return (0);

}
int main()
{
	int n;
	printf("Number of floors: ");
	scanf("%d", &n);
	if (n < 0)
		printRevPyramid(n);
	if (n == 0)
		printf("What did you expect to see?) ^_^\n");
	else
		printPyramid(n);
	return (0);
}
