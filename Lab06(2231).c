#include <stdio.h>

int main(void) {
  int n, n1, n2, n3, n4, n5, n6;
  scanf("%d", &n);
  if (n==1){printf("0\n");}
  else {
    for(int i=1; i<n; i++){
      n1 = i%10;
      n2 = (i%100)/10;
      n3 = (i%1000)/100;
      n4 = (i%10000)/1000;
      n5 = (i%100000)/10000;
      n6 = (i%1000000)/100000;
      if (i+n1+n2+n3+n4+n5+n6 == n){
        printf("%d\n", i); break;
      }
      if (i == n-1){
        printf("0\n"); break;
      }
    }
  }
}