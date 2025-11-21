#include<stdio.h>
//int Update(int n)
//{
//	n=n*10;
//	return n;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	n=Update(n);
//	printf("%d",n);
//}
int update(int *n){
	(*n)=(*n)*10;
}
int main(){
	int n;
	scanf("%d",&n);
	update(&n);
	printf("%d",n);
	
}
