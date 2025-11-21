#include<stdio.h>
#include<math.h>
int main()
{
	int S,a,b,c,A;
	scanf("%d %d %d",&a,&b,&c);
	S=(a+b+c)/2;
	printf("%d",S);
	A=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("%.4f",A);
	return 0;
}
