#include<stdio.h>
int main(){
	int word,sum=0,mod;
	printf("Enter the number\n");
	scanf("%d",&word);
	while(word>0){
		
		mod = word%10;
		sum=sum+mod;
		word = word/10;
	}
	printf("sum of digit is %d",sum);
	
}
