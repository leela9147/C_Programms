#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int even=0;
	int odd=0;
	for(i=0;i<n;i++){
		if((a[i])%2==0){
			even+=a[i];
		}
		else{
			odd+=a[i];
		}
	}
	if(even>odd){
		printf("%d",even-odd);
	}
	else if (even==odd){
		printf("0");
	}
	else{
		printf("%d",odd-even);
		
	}
}
