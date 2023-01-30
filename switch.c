#include <stdio.h>

int main () {

    int num;
    printf("digite um número ");
    scanf("%d", &num);

    switch(num) {
        case 1: printf("num é 1\n");
            break;
        case 2: printf("num é 2\n");
            break;
        case 3: printf("num é 3\n");
            break;
        default: printf("num não é 1 2 ou 3\n");
    }

    return 0;
}