#include<stdio.h>
int main(){
	void swap(int *a,int *b){
		int none=*a;
		*a=*b;
		*b=none;
		
	}
	int x=47,y=91;
	swap(&x,&y);
	printf("%d %d",x,y);
}
