#include <stdio.h>
//1268
int main(void) {
  int arr[1001][6], n, a[1000], t[1000]={0,}, max=0;
  scanf("%d", &n);
  
  for (int i=0; i<n; i++){
    for (int j=0; j<5; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for (int k=0; k<n; k++){ 
    for (int i=0; i<n; i++){a[i] = 0;}
    for (int j=0; j<5; j++){
      for(int i=0; i<n; i++){
        if (arr[k][j]==arr[i][j] && i!=k){
          a[i]=1;
        }
      }
    }
    for (int i=0; i<n; i++){
      if (a[i]) t[k]++;
    }if (t[k]>max) max = t[k];
  }
  
  for (int i=0; i<n; i++){
    if (t[i]==max){printf("%d", i+1); return 0;}
  }
}