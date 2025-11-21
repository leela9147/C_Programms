#include<stdio.h>
void printsubsequences(int a[],int idx,int n,int b[],int k){
	int i;
	if(idx>=n||k<=0){
		
	for(i=0;i<n;i++){
	if(b[i]!=0)printf("%d ",b[i]);
			}
			printf("\n");
		
		return;
	}
	//picking call
	b[idx]=a[idx];
	k=k-b[i];
	printsubsequences(a,idx+1,n,b,k);
	b[idx]=0;
	//non picking call
	printsubsequences(a,idx+1,n,b,k);
}
int main(){
	int n,k,i;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	printsubsequences(a,0,n,b,k);
}
