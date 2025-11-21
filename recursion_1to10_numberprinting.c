#include<stdio.h>
void fun1(int i){
if(i>10)return;
printf("%d ",i);
fun1(i+1);
}
void fun2(int j){
	if(j<1)return;
	printf("%d ",j);
	fun2(j-1);
}
int main(){
	int i=1,j=10;
	fun1(i);
	printf("\n");
	fun2(j);
}
