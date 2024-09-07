#include<stdio.h>
int main(){
	int r,c,arr[10][10],tra[10][10];
	printf("Enter the row and column of array\n");
	scanf("%d %d",&r,&c);
	printf("Enter the value of matrix\n");
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
		 tra[j][i]=arr[i][j];
		}
	}
	printf("Transpose of a matrix:\n");
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("%d  ",tra[j][i]);
		}
	printf("\n");
	}
	return 0;
}
