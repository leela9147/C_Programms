#include<stdio.h>
int main(){
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
		int u,v;
	scanf("%d %d",&u,&v);
	int a[n][m],b[u][v];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
		
	}

		for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(m!=u){
		printf("Not possible");
		return 0;
	}
	int r[n][v];
		for(i=0;i<n;i++){
		for(j=0;j<v;j++){
		int sum=0;
		for(k=0;k<m;k++){
			sum+=a[i][k]*b[k][j];
		}
		r[i][j]=sum;
	}
}
		for(i=0;i<n;i++){
		for(j=0;j<v;j++){
			printf("%d ",r[i][j]);
		}
	printf("\n");
	}
}
