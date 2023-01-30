#include <stdio.h>

// exemplo do uso de ternário em c

int main() { 

    int x,y;
    printf("digite x: ");
    scanf("%d", &x);
    printf("digite y: ");
    scanf("%d", &y);

    (x > y) ? printf("x é maior que y\n") : printf("x é menor que y\n");

    int z;
    z = x > y ? x : y;
    printf("o maior número é %d\n", z);
    return 0;
}