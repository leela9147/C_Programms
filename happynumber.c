#include<stdio.h>
#include<math.h>
int main(){
	int num;
	scanf("%d",&num);//19
	int s=0;
	while(num<1){
		int ld=num%10;//9 1
		int h=pow(ld,2);//81 1
		s+=h;//s=82
		num/=10;
		if(num==0){
			num=s;//82
			s=0;
		}
		num/=10;
	}
	if(s==1||7){
		printf("happy num");
	}
	else{
		printf("not happy num");
	}
	return 0;
}
