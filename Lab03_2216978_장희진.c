#include <stdio.h>

int main(void) {
  int prime[1000];
  prime[0] = prime[1] = 0;
  for (int p=2;p<1000;p++){
    prime[p]=1;
  }
  for (int p=2; p<32; p++){
    if (prime[p]==1){
      for(int i=2; i*p<1000;i++){
        prime[p*i]=0;
      }
    }
  }int i=0;
  for(int p=0;p<1000;p++){
    if (prime[p]==1){
      printf(" %3d" , p); 
      i++;
      if (i%15==0){
        printf("\n");
      }
    }
  }
}