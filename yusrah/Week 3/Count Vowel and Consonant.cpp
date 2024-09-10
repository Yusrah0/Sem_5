#include<stdio.h>
#include<string.h>
int main(){
	char word[20];
	int n,vow=0,cons=0;
	printf("Enter the string\n");
	fgets(word,20,stdin);
	n=strlen(word);
	for(int i=0;i<n;i++){
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
			vow++;
		}
		else if(word[i]==' '){
			continue;
		}
		else{
		cons++;	
		}
	}
		printf("vowels: %d, consonant: %d",vow,cons);
	return 0;
}
