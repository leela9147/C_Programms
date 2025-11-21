#include<stdio.h>
#include<math.h>
int main(){
	int num,prev,cur;
	int up=0,down=0;
	scanf("%d",&num);//2436

		prev=num%10;//6
		num/=10;
		cur=num%10;//3
		if(cur>prev){
			up=1;
		}
		else{
			down=1;//down=1
		}
		prev=cur;//prev=3
		num/=10;//243
		while(num){
		cur=num%10;//4
		if(up==1&&cur>prev){
		up=0;
		prev=cur;
	    }
		else if(down==1&&prev>cur){
			down=0;//
		prev=cur;//
			
		}
		
		}
		if(up==0&&down==0){
			printf("wave number");
		}
		else{
			printf("not wave number");
		}
	}
		
		
	
	

