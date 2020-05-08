//Число Непера-Эйлера. все значения exp = 1 + 1/!1 ... 1/!n

#include <stdio.h>
double fac(int n)
{
    return (n>0) ? n * fac(n-1) : 1;
}

int main()
{
    double e=1;
    int n;
    printf("Введите количество: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        e = e + 1/fac(i);
        printf("%4d  |  %.8lf\n",i, e);
    }    
    return 0;
}
