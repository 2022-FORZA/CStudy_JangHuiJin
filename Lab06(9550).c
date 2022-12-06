#include <stdio.h>

int main(void) {
  int happy, type, t, candy, count[1000] = {0,};
  scanf("%d", &t);
  for (int i=0; i<t; i++){
    scanf("%d %d", &type, &happy);
    for (int j=0; j<type; j++){
      candy = 0;
      scanf("%d", &candy);
      count[i] += candy / happy;
    }
  }
  for (int i=0; i<t; i++)
  printf("%d\n", count[i]);
}
