#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=4;i>=0;i--){
	if((n&(1<<i))>0){
		printf("%d",1);
	}
	else{
		printf("%d",0);
	}
}
return 0;
}
