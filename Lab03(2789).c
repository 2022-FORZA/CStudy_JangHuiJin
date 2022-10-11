#include <stdio.h>

int main(void) {
  char arr[100]="", cam[9] = {'C','A','M','B','R','I','D','G','E'};
  int n=0;
  scanf("%s", arr);
  int length = sizeof(arr);

  for (int i=0; i<100; i++){
    for (int j=0; j<9; j++){
      if (arr[i]==cam[j]){
        arr[i] = 0;
      }
    }
  }
 
  for(int p=0; p<length; p++){
    if ((arr[p]!= '\0')){
      printf("%c",arr[p]);
    }
  }
}
