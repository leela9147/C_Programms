#include<stdio.h>
int main(){
	int n,y,r,W;
	scanf("%d",&n);
	y=n/365;
	printf("%d\n",y);
	r=n%365;
	W=r/7;
	printf("%d",W);
	return 0;
}
