#include <stdio.h>
#include <string.h>

int main() {
	char arr[100], word[100], wd[100];
	int n=0;
	scanf("%s", arr);
	scanf("%s", word);
	for (int i = 0; i<strlen(arr); i++){
		if ((arr[i]<48)||(arr[i]>57)){
			wd[n] = arr[i]; n++;
    }
	}
	wd[n] = NULL;
	if (strstr(wd,word) != NULL){
    printf("1");
  }else{printf("0");}
}