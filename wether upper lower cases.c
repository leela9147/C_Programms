#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0){
		printf("wierd");
	}
		else if(n%2==0&&6<=n&&n<=20){
		printf("wierd");
	}
	else if(n%2==0&&2<=n<=5||n>20){
		printf("not wierd");
	}

	
	
}

