#include<stdio.h>

int printPyramid(int n)
{

	int y = 1;
	while (y <= n)
	{
		char spaces[n];
		sprintf(spaces, "%%%dd", n + 1 - y);
		printf(spaces, y);
		int x = y;
		while (--x != 0)
	        {
			printf("%2d", y);
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
		printf("Sorry...I cant build it(  >.<\n");
	if (n == 0)
		printf("What did you expect to see?) ^_^\n");
	else
		printPyramid(n);
	return (0);
}
