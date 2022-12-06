#include <stdio.h>

int main(void) {
  int n, n1, cy=0;
  scanf("%d", &n); n1 = n;
  while (1) {
    n = (10*(n%10))+((n/10+n%10)%10);
    cy = cy + 1;
    if (n == n1) {break;}
  }
  printf("%d", cy);
}
