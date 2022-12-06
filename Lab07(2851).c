#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[100], sum=0;
  for (int i=0; i<10; i++){
    scanf("%d", &arr[i]);
  }
  for (int i=0; i<10; i++){
    sum += arr[i];
  }if (sum<100){printf("%d", sum);}
  sum = 0;
  
  for (int i=0; i<10; i++){
    sum += arr[i];
    if (sum==0){printf("1"); break;}
    else if (abs(100-sum-arr[i+1])>abs(100-sum)){
      printf("%d", sum);
      break;
    }
  }
}
