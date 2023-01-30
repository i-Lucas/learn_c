#include <stdio.h>
#define N 3

int main ()  {

    float notas[N], media = 0.0;
    for (int i = 0; i < N; i++) {
        printf("Insira uma nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= N;
    printf("A média é: %.2f\n", media);
    return 0;
}
