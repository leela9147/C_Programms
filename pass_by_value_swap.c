#include<stdio.h>
//void swap(int a,int b){
//	int temp=a;
//	a=b;
//	b=temp;
//	printf("Afer Swap Call\n");
//	printf("%d %d",a,b);
//	
//}
//int main(){
//	int p=3,q=6;
//	printf("Before Swap\n");
//	printf("%d %d\n",p,q);
//	swap(p,q);
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int a=3,b=8;
	printf("Before Swap\n");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("After Swap call\n");
	printf("%d %d",a,b);
}

