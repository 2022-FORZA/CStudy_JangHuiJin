#include <stdio.h>

int main(void) {
  int a=0, b=0, n, acheck=0, bcheck=0;
  char arr[101][101];
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%s", arr[i]);

  for (int i=0; i<n; i++){
    acheck = 0;
    for (int j=0; j<n; j++){
      if (arr[i][j]== '.'){
        acheck++;
      }
      if ((acheck >=2)&&(arr[i][j]== 'X')){
        a++; acheck=0;
      }else if (arr[i][j]== 'X'){
        acheck = 0;
      }
    }if (acheck >=2) {a++;}
  }
  for (int i=0; i<n; i++){
    bcheck = 0;
    for (int j=0; j<n; j++){
      if (arr[j][i]== '.'){
        bcheck++;
      }
      if ((bcheck >=2)&&(arr[j][i]== 'X')){
        b++; bcheck=0;
      }else if (arr[j][i]== 'X'){
        bcheck = 0;
      }
    }if (bcheck >=2) {b++;}
  }

  printf("%d %d", a, b);

  
}
