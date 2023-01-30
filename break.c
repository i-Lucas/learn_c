#include <stdio.h>

int main () {

    int i = 10;
    for(int j = 0; j < i; j++) {

        printf("%d\n", j);
        if(j == 5) {
            break;
        }
    }

    printf("ok\n");
    return 0;
}