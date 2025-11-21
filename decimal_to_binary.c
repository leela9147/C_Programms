#include<stdio.h>
int decimal_to_binary(int decimal){
	int binary[32];
	int i=0,j;
	while(decimal>0){
		binary[i++]=decimal%2;
		decimal=decimal/2;
	}
	//printing the binary
	for(j=i-1;j>=0;j--){
		printf("%d ",binary[j]);
	}
}
int main(){
	int decimal;
	scanf("%d",&decimal);
	decimal_to_binary(decimal);
}
