#include<stdio.h>
int main(){
	
	
		int n,i;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int last=a[n-1];
		int k;
	scanf("%d",&k);
	
		for(i=1;i<=k;i++){
		int j;
			for(j=n-2;j>=0;j--){
			
		a[j+1]=a[j];	}
		}
		a[0]=last;
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
	
}
