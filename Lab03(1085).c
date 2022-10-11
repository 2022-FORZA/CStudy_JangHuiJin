#include <stdio.h>

int main(void) {
  int x,y,w,h, d1, d2, d3, d4, min = 1000;
  scanf("%d %d %d %d", &x, &y, &w, &h);
  d1 = h - y;
  if (d1<min) min = d1;
  d2 = x;
  if (d2<min) min = d2;
  d3 = y;
  if (d3<min) min = d3;
  d4 = w-x;
  if (d4<min) min = d4;
  printf("%d", min);
}
