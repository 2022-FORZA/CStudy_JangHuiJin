#include <stdio.h>

int main(void) {
  int t, a, b;
  scanf("%d", &t);
  for (int i=0; i<t; i++){
    int r = 1;
    scanf("%d %d", &a, &b);
    for (int i=0; i<b; i++){
      r = r*a;
      r = r%10;
      
    }
    if (r==0) printf("10\n");
    else printf("%d\n", r);
  }
}
