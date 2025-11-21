#include<stdio.h>
	void display(int rows,int columns,int arr[rows][columns]);
	void transpose(int rows,int columns,int arr[rows][columns]);
int main(){
	int i,j;
	int arr[2][3];
	printf("Enter the array elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
		}
	}
	printf("Array Before Transpose:\n");
	display(2,3,arr);
	transpose(2,3,arr);
	
}
void display(int rows,int columns,int arr[rows][columns]){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
void transpose(int rows,int columns,int arr[rows][columns]){
	int T[columns][rows],i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			T[j][i]=arr[i][j];
		}
	}
	printf("Array Elements after Transpose:\n");
	display(columns,rows,T);
}

