#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
int i;
printf("values of array");
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for(i=n-1;i>=0;i--){
	printf("%d\n",arr[i]);
}
int sum=0;
for(i=0;i<n;i++){
	sum+=arr[i];
}
printf("sum=%d\n",sum);
//finding the max value
int max=arr[0];
for(i=1;i<n;i++){
	if(arr[i]>max){
		max=arr[i];
	}
	
}
printf("max:%d\n",max);
int min=arr[0];
for(i=1;i<n;i++){
	if(arr[i]<min){
		min=arr[i];
	}
	
}
printf("min is%d",min);

}
