#include <stdio.h>

int main(void) {
  char arr[8][8];
  for (int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      scanf("%1s",& arr[i][j]);
    }
  }
  int n=0;
  for (int i=0; i<8; i++){
    if (i%2==0) {
      for (int j=0; j<8; j+=2){
        if (arr[i][j] == 'F'){n++;}
      }
    }else{
      for (int k=1; k<8; k+=2){
        if (arr[i][k] == 'F'){n++;}
      }
    }
  }
  printf("%d", n);
}