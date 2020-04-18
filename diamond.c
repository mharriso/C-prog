#include<stdio.h>
#define RESET "\033[0m"
#define CYAN "\033[1;36m"

int printPyramid(int n, int amt)
{

	int y = 1;
	while (y <= n)
	{
		int i = 1;
		char spaces[n];
		while (i <= amt)
		{
			if (i == 1)
			{
			    sprintf(spaces, "%%%dd", n + 2 - y);
			    printf(spaces, y);
			}
			else
			{
				sprintf(spaces, "%%%dd", (n + 1 - y)*2);
				printf(spaces, y);
			}
			int x = y - 1;
			while (x != 0)
	    		{
			printf("%s%2d%s", CYAN, y, RESET);
			x--;
			}
			i++;

		}
		printf("\n");
		y++;
	}

	return (0);
}

int printRevPyramid(int n, int amt)
{
	int y = 1;
	while (y <= n - 2)
	{
		int i = 1;
		char spaces[n];
		while (i <= amt)
		{
			if (i == 1)
			{
			    sprintf(spaces, "%%%dd", y + 2);
			    printf(spaces, n - y);
			}
		   	else
			{
			    sprintf(spaces, "%%%dd", (y + 1)*2);
			    printf(spaces, n - y);
			}
			int x = n - 1 - y;
			while (x != 0)
	        	{
			printf("%s%2d%s", CYAN, n - y, RESET);
			x--;
		    	}
			i++;
		}
		printf("\n");
		y++;
	}
	return (0);

}

int printRevPyramidEnd(int n, int amt)
{
	int y = 1;
	while (y <= n - 1)
	{
		int i = 1;
		char spaces[n];
		while (i <= amt)
		{
			if (i == 1)
			{
			    sprintf(spaces, "%%%dd", y + 2);
			    printf(spaces, n - y);
			}
		        else
			{
			    sprintf(spaces, "%%%dd", (y + 1)*2);
			    printf(spaces, n - y);
			}
			int x = n - 1 - y;
			while (x != 0)
	        	{
			printf("%s%2d%s", CYAN, n - y, RESET);
			x--;
		    	}
			i++;
		}
		printf("\n");
		y++;
	}
	return (0);

}

int diamond(int n, int amt)
{
	printPyramid(n, amt);
	printRevPyramid(n, amt);
	return (0);
}

int diamondEnd(int n, int amt)
{
	printPyramid(n, amt);
	printRevPyramidEnd(n, amt);
	return (0);
}
int main()
{
	int amt,lines,n;
	printf("\nПривет!) Будем делать узор!\n\nКакой будет размер одного элемента? : ");
	scanf("%d", &n);
	printf("\nВведите, пожалуйста, количество в строке: ");
	scanf("%d", &amt);
	printf("\nИ еще, пожалуйста, количество строк: ");
	scanf("%d", &lines);
	printf("\n\n");

	
	if (n == 0)
		printf("What did you expect to see?) ^_^\n");
	if (n > 0 & lines > 0)
		while(lines != 1)
		{
			diamond(n, amt);
			lines--;
		}
		diamondEnd(n, amt);
	return (0);
}
