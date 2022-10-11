#include <stdio.h>

int main(void) {
  int h, m, n;
  scanf("%d %d", &h, &m);
  if (m>=45) printf("%d %d", h, m-45);
  else if(h==0)
    printf("23 %d", m-45+60);
  else printf("%d %d", h-1, m-45+60);
}
