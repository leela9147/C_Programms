#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=10;
	arr=(int*)realloc(arr,n*sizeof(int));
		for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
