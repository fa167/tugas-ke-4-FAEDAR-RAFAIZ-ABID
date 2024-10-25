#include <stdio.h>

int main() {
  int N;

  printf("Masukkan bilangan: ");
  scanf("%d", &N);

  if (N > 50) {
    N = N - 25;
    printf("Hasil: %d\n", N);
  } else {
    N = N + 10;
    printf("Hasil: %d\n", N);
  }

  return 0;
}
