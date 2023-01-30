#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

    int number;
    bool finish = false;

    srand(time(NULL)); // random seed

    while(!finish) {

        int random = rand() % 11; // 0 - 10

        printf("digite um número: ");
        scanf("%d", &number);
        if(number == random) {
            printf("acertou mizeravi \n");
            finish = true;
        } else {
            printf("numero errado ! o número sorteado foi %d\n", random);
        }
    }
    return 0;
}