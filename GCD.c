#include<stdio.h>
int main()
{
	int num1,num2,GCD;
	scanf("%d %d",&num1,&num2);
	int r=2;
	int LCM=1;
	while(r<=num1,r<=num2){
		if(num1%r==0&&num2%r==0){
			num1=num1/r;
			num2=num2/r;
			LCM=LCM*r;
		}
		else{
			r++;
		}
		
	}
	LCM=LCM*num1*num2;
	GCD=(num1*num2)/LCM;
	printf("%d",GCD);
	return 0;
}
