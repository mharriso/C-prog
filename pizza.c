#include <stdio.h>

//расчет ингредиентов теста для пиццы, d = 30см :)

int main()
{
    int n, fl = 135, h2o = 100, d = 1, oil = 1;
    float salt = 2.5;
    
    printf("Сколько будет пицц?) ");
    scanf("%d", &n);
    printf("Мука - %d гр.\n", fl*n);
    printf("Вода - %d мл.\n", h2o*n);
    printf("Соль - %.2g гр.\n", salt*n);
    printf("Дрожжи - %d гр.\n", d*n);
    printf("Ол.масло - %d ст.л.\n", oil*n);
    
    return 0;
}
