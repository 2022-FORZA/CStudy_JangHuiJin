#include <stdio.h>

int main(void) {
  int a1, a2, b1, b2, n[3];
  scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
  scanf("%d %d %d", &n[0], &n[1], &n[2]);
  for (int i=0; i<3; i++){
    int p, r=0;
    p = n[i] % (a1+a2);
    if (p>0&&p<=a1) r++;
    p = n[i] % (b1+b2);
    if (p>0&&p<=b1) r++;
    printf("%d\n", r);
  }
}