#include<stdio.h>
int main(){
	int start,end,count=0;
	printf("Enter the range of number\n");
	scanf("%d %d",&start,&end);
	for(int i=start;i<=end;i++){
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				count++;
                                break;
			}
		}
		if(count==0){
			printf("%d, ",i);
		}
	count =0;	
	}
}
