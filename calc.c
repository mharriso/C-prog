#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		switch(*argv[2])
	        {
	       	case '+': printf ("%d", atoi(argv[1]) + atoi(argv[3]));
	        break;
		case '-': printf ("%d", atoi(argv[1]) - atoi(argv[3]));
		break;
		case '*': printf ("%d", atoi(argv[1]) * atoi(argv[3]));
                break;
		case '/': printf ("%d", atoi(argv[1]) / atoi(argv[3]));
		break;
		case '%': printf ("%d", atoi(argv[1]) % atoi(argv[3])); 
                break;
		}
		
	}
	printf("\n");
	return(0);
}
