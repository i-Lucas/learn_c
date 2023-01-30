#include <stdio.h>

int main() {

  int l = 0;
  start:

    if (l <= 5) {
      printf("number: %d\n", l);
      l++;
      goto start;
    }

  int i, j, k;
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 5; k++)
        if (i == 2 && j == 3 && k == 1)
          goto end;
        else
          printf("pos [%d, %d, %d]\n", i, j, k);

  end:
    printf("program exit\n");
  return 0;
}