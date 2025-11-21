#include<stdio.h>
int main(){
	int x=47;
	int *p=&x;
	printf("%d\n",*p);
	*p=91;
	printf("%d\n",x);
}
