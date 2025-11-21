#include<stdio.h>
int main(){
	int s,h,m,n,r;
	scanf("%d",&n);
	h=n/3600;
	r=n%3600;
	m=r/60;
	s=(r%60);
	printf("H:M:S%d:%d:%d",h,m,s);
}
