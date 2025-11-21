#include<stdio.h>
int main()
{
	int X,Y;
	scanf("%d %d",&X,&Y);
	int i=Y;
	
	while(i>=X){
		if(i%2==0){
			printf("%d\n",i);
		}
		i--;
	}
}
