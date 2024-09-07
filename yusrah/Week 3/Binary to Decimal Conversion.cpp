#include<stdio.h>
#include<conio.h>
int main(){
	int num,bin,dec=0,base=1,rem;
	printf("Enter the binary number in 0 and 1\n");
	scanf("%d",&num);
	bin=num;
while(num!=0){
rem=num%10;
dec=dec+rem*base;
num=num/10;
base=base*2;	
}
	printf("Decimal equivalent of this number is %d",dec);
	return 0;
}
