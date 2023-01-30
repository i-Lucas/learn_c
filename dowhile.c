#include <stdio.h>

int main () {

    int n, m;
    printf("digite um número: ");
    scanf("%d", &n);

    do {
        printf("%d\n", m);
        m++;
    } while(m <= n);

    return 0;
}