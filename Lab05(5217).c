#include <stdio.h>

int main(void) {
  int t, a, n;
  scanf("%d", &t);
  for (int i=0; i<t; i++){
    a = 0; n=0;
    scanf("%d", &a);
    printf("Pairs for %d:", a);
    for (int j=1; j<a; j++){
      if (j>a-j){
        break;
      }
      if ((a-j != j) && (n==1)) {
        printf(", %d %d", j, a-j);
      }else if ((a-j != j) && (n==0)){
        printf(" %d %d", j, a-j); n=1;
      }
    }printf("\n");
  }
}