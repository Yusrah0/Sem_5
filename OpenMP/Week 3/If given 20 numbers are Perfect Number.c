#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
int arr[20],num,sum=0,i,j;
printf("Enter 20 number to check perfect number\n");
for( i=0;i<20;i++){
	scanf("%d",&arr[i]);
}
#pragma omp parallel for private(num,sum)
for(i=0;i<20;i++){
	num=arr[i];
	sum=0;
	for(j=1;j<=num/2;j++){
		if(num%j==0){
			sum+=j;
		}
	}
	if(sum==arr[i]){
		printf("%d is a perfect number\n",arr[i]);
	}
	else{
			printf("%d is not a perfect number\n",arr[i]);
	}
}
return 0;
}
