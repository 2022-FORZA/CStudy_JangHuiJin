#include <stdio.h>

int main(void) {
  int arr[100], tf;
  for (int i=0; i<8; i++){
    scanf("%d", &arr[i]);
  }
  for (int j=0; j<7; j++){
    if (arr[j]+1==arr[j+1]) {tf=0;}
    else if (arr[j]-1==arr[j+1]) {tf=1;}
    else {tf=2; break;}
  }
  if (tf==0) printf("ascending");
  else if (tf==1) printf("descending");
  else printf("mixed");
}