#include <stdio.h>
#include <string.h>

int main(void) {
  char arr1[1000000], arr2[1000000], arr3[1000000];
  int n=0, t=0, n1, n2;
  scanf("%s", arr1);
  scanf("%s", arr2);
  t = strlen(arr1);
  for (int i=0; i<t; i++){
    for (int j=0; j<t; j++){
      if (arr1[i]==arr2[j]){
        for (n1 = i, n2 = j;(arr1[n1]!=arr2[n2])||((arr1[i] || arr2[i]) == '\0');n1++,n2++){
          arr3[n++] = arr1[n1];
        }break;
      }
    }
    /*if (arr1[i]==arr2[i]){ 
      arr3[n++] = arr1[i];
      t = 1;
    }if ((arr1[i]!=arr2[i] && t == 1)||((arr1[i] || arr2[i]) == '\0')) break;*/
    
  }
  printf("%s", arr3);
}