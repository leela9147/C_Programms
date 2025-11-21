#include<stdio.h>
int main(){
	char arr[10];
	scanf("%[^\n]s",arr);
	int i;
	int c=0;
	for(i=0;arr[i]!='\0';i++){
		c++;
	}
	printf("%d",c);
}
