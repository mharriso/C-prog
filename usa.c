#include <stdio.h>
void string()
{ 
  for(int i=0; i<49; i++)
    printf("_");
}
void star_string()
{
  for(int i=0; i<8;i++)
    printf("*");
  for(int i=0; i<41;i++)
    printf("_");
}

int main() 
{
  for(int i=0; i<13;i++)
  {
    if (i>0&&i<7)
      star_string();
    else
      string(); 
  printf("\n");
  }
  return 0;
}
