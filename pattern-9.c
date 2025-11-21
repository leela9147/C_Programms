#include<stdio.h>
int main(){
	int n=6,i,j;
	for(i=1;i<=n;i++){
		for(j=n-i+1;j>0;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
