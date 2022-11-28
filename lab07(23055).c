#include <stdio.h>

int main(void) {
  int n, p=0;
  
  scanf("%d", &n);
  for (int i=0; i<n; i++)
    printf("*");
      
  printf("\n");

  for (int j=0; j<(n/2-1); j++){
    printf("*");
    for (int k=0; k<p;k++)
      printf(" ");
    printf("*");
    for (int k=0; k<n-(p+2)*2;k++) 
      printf(" ");
    printf("*");
    for (int k=0; k<p;k++)
      printf(" ");
    p++;
    printf("*\n");
  }p = n/2-2;
  if (n%2==1 && n>2){
    printf("*");
    for (int k=0; k<p+1;k++)
      printf(" ");
    printf("*");
    for (int k=0; k<p+1;k++)
      printf(" ");
    printf("*\n");
  }if (n>1){
  for (int j=0; j<(n/2-1); j++){
    printf("*");
    for (int k=0; k<p;k++)
      printf(" ");
    printf("*");
    for (int k=0; k<n-(p+2)*2;k++) 
      printf(" ");
    printf("*");
    for (int k=0; k<p;k++)
      printf(" ");
    p--;
    printf("*\n");
  }
  for (int i=0; i<n; i++)
    printf("*");
 }

}