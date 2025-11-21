#include<stdio.h>
int main(){
	int n,m,i,j=0,k=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	int b[m];
	for(i=0;i<m;i++)scanf("%d",&b[i]);
	int c[n+m];
for(i=0;i<(n+m);i++){
	if(j>=n||k>=m){
		if(j>=n){
			c[i]=b[k];
			k++;
		}
		else{
			c[i]=a[j];
			j++;
		}
	}
	else{
	if(a[j]==b[k]){
		c[i]=a[j];
		j++;
	}
	else if(a[j]>b[k]){
		c[i]=b[k];
		k++;
	}
	else{
		c[i]=a[j];
		j++;
	}
	}
}
for(i=0;i<m+n;i++)printf("%d ",c[i]);
	

	
}
