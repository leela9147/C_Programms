#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		char s[104];
		scanf("%[^\n]s",s);
		int c=0;
		for(i=0;s[i]!='\0';i++){
		if(s[i]>='0'&&s[i]<='9'){
			c++;
		}
		}
		if(c>0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
