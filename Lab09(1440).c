#include <stdio.h>

int main(void) {
  int a[10], c=0;
  scanf("%2d:%2d:%2d", &a[0], &a[1], &a[2]);
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      for (int k=0; k<3; k++){
        if (i!=j && i!=k && k!=j){
          if ((a[i] >= 1 && a[i] <= 12)&&
            (a[j] >= 0 && a[j] <= 59)&&
            (a[k] >= 0 && a[k] <= 59)) c++;
        }
      }
    }
  }
  printf("%d", c);
}