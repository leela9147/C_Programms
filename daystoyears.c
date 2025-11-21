#include<stdio.h>
int main(){
	int N,Y,W,R;
	scanf("%d",&N);
	Y=N/365;
	printf("%d",Y);
	R=N%365;
	W=R/7;
	printf("%d",W);
	return 0;
	
}
