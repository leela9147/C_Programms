
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,n=1;
	float c;
	scanf("%d %d %d",&p,&t,&r);
	c=p*(1+r/n)^n*t;
	printf("%f",c);
}
