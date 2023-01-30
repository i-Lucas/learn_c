#include <stdio.h>

int main () {

    int i = 10;
    for(int n = 0; n <= i; n ++ ){

        if(n % 2 != 0) continue;
        printf("n is even ( n = %d )\n", n);
    }
    return 0;
}