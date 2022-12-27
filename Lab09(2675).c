#include <stdio.h>
#include <string.h>

int main(void) {
  char arr[100];
  int t, r;
  
  scanf("%d", &t);
  
  for (int i=0; i<t; i++){
    scanf("%d %s", &r, arr);
    for (int j=0; j<strlen(arr); j++){
      for(int k=0; k<r; k++){
        printf("%c", arr[j]);
      }
    }printf("\n");
  }
  
}