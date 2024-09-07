#include<stdio.h>
int main(){
	int num,sum=0,rev,temp;
	printf("Enter the number \n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		rev=temp%10;
		sum=(sum*10)+rev;
		temp=temp/10;
	}
	printf("reverse of %d is %d",num,sum);
	return 0;
}
