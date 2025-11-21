#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	printf("1\n");
    int n=digitsSize,i;
    int b[n];
    for(i=0;i<n;i++){
        b[i]=*(digits+i);
    }
   int carry=0;
   int l=b[n-1]+1;
   *returnSize=digitsSize;
      printf("2\n");
   int *sum=(int *)malloc(*returnSize*sizeof(int));
   if(l<9){
   	    
    b[n-1]=b[n-1]+1;
    for( i=0;i<n;i++){
        *(sum+i)=b[i];
    }
    return sum;
   }
   else{
    b[n-1]=l%10;
    l=l/10;
    carry=l%10;
    int m=n-2;
    while(carry!=0&&m>=0){
        l=b[m]+carry;
        if(l>9){
            b[m]=l%10;
            l=l/10;
            carry=l;
        }
        else{
            b[m]=l;
            break;
        }
    }
   }
for(i=0;i<n;i++){
        *(sum+i)=b[i];
        printf("%d ",*(sum+i));
    }
    return sum;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	int *p=0;
	int *re=plusOne(arr,n,p);
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}
