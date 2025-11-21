#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=150){
		printf("Dwarf");
	}
	else if(150<n&&n<=165){
		printf("average");
	}
	else if(165<n&&n<=195){
		printf("Taller");
	}
	else{
		printf("Abnormal height");
	}
}
