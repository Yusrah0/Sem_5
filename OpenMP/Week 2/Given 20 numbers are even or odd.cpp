#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
int arr[20];
printf("Enter 20 number to check if they are odd or even\n");
for(int i=0;i<20;i++){
	scanf("%d",&arr[i]);
}
#pragma omp for
for(int i=0;i<20;i++){
if(arr[i]%2==0){
	printf("%d is even\n",arr[i]);
}
	else{
		printf("%d is odd\n",arr[i]);
	}
 } 
 return 0;
}