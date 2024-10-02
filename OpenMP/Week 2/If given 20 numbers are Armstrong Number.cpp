#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
	int arr[20],sum=0,num,rem,tid;
printf("Enter 20 three digit number to check Armstrong number\n");
for(int i=0;i<20;i++){
	scanf("%d",&arr[i]);
}
#pragma omp for private(num,rem,sum)
for(int i=0;i<20;i++){
	tid=omp_get_thread_num();
	 num=arr[i];
	 sum=0;
	while(num!=0){
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	if(sum==arr[i]){
		printf("%d is an Armstrong number from thread %d\n",arr[i],tid);
	}
	else{
		printf("%d is not an Armstrong number from thread %d\n",arr[i],tid);	
	}
}
return 0;
}
