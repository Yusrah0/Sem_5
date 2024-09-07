#include<stdio.h>
int main(){
	int mat1[3][3]={{1,2,3},{4,8,6},{7,8,9}};
	int mat2[3][3]={{9,7,7},{7,3,2},{1,5,3}};
	int sum[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum[i][j]=mat1[i][j]+mat2[i][j];		
	printf("%d ",sum[i][j]);
	}
	printf("\n");
}
return 0;
}
