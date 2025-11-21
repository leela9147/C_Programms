#include<stdio.h>
int main(){
	int a[6]={1,2,3,4,5,6};
int i=0;
int j=5;
	while(i<j){
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		i++;
		j--;
	}
	for(i=0;i<6[p];i++)
	{
		printf("%d ",a[i]);
	}
}
