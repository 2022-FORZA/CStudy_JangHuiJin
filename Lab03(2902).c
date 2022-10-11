#include <stdio.h>

int main(void) {
  char l[100], s[100];
  scanf("%s", l);
  int n=1;
  s[0] = l[0];
  for (int i=0; i<100; i++){
    if (l[i]=='-'){
      s[n] = l[i+1]; n++;
    }
  }
  printf("%s", s);
  
}
