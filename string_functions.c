#include<stdio.h>
#include<string.h>
int main(){

//how to read input with space using scanf in strings
//scanf("%[^\n]s",s);it means it takes every thing as input upto we enter
//string functions
//1) strcpy
//2)strcmp
//3)strlen
//4)strstr(s,t)-->s=theabcdcbeddcb,t=dcb
//5)strlwr
//6)strupr
//7)strcat
//char s[5]="hello";
//char d[10];
//char v=strcpy(d,s);
//printf("%s\n",d);
char a[7]="varshuu";
char b[6]="varsha";
char l=strncpy(a,b,5);
printf("%s",l);


}
