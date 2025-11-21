#include<stdio.h>
int main(){
	float p,h,d,s,g;
	//23000,9500,9500
	scanf("%f\n%f\n%f",&s,&h,&d);
	p=(12/100.0)*s;
	g=p+h+d+s;
	printf("%f\n%f",p,g);
}
