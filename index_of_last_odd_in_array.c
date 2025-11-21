#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int odd=a[0];
	int index=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			odd=a[i];
			index=i;
		}
	}
	printf("%d %d",odd,index);

}
