#include<stdio.h>
#include<string.h>
int main(){
char str[10];
int len,pal=0;
printf("enter the string or number\n");
scanf("%s",&str);
len=strlen(str);
for(int i=0;i<len;i++){
	if(str[i]!=str[len-i-1]){
		pal=1;
		break;
	}
}
if(pal){
	printf("%s is not palindrome",str);
}
else{
	printf("%s is palindrome",str);
}
return 0;
}
