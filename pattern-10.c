#include<stdio.h>
int main(){
	int n=6,i,j;
	for(i=1;i<n;i++){
		for(j=1;j<=n-i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
