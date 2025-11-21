#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int cnt=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			
			cnt++;
		}
		
	}
	if(cnt==2&&n%2==0){
		printf("even prime");
	}
	else if(cnt==2){
		printf("prime");
	}
	else{
		printf("not prime");
	}
	return 0;
}
