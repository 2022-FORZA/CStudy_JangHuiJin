#include <stdio.h>

int main(void){
    int i,min,j,temp;
    int c[3];
    for(i=0;i<3;i++){
        scanf("%d",&c[i]);
    }
    for(i=0;i<2;i++){
        for(j=0;j<2-i;j++){
            if(c[j]>c[j+1]){
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
    }
    for(i=0;i<3;i++){
    printf("%d ",c[i]);}
}