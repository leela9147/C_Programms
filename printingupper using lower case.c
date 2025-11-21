#include<stdio.h>
int main(){
	char c='a';//the address of "A" and "a" differs by 5th place
	
	c=c&~(1<<5);
	printf("%c\n",c);
	char x='b';
	x=x&~(' ');//(1<<5)value 32 is equal to ' ' value
	printf("%c\n",x);
	char m='L';
	m=m|(' ');
	printf("%c\n",m);
	char y=' ';
	printf("%d",y);
}
