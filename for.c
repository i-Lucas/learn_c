#include <stdio.h>

int main () {

    int n;
    printf("digite um número ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}