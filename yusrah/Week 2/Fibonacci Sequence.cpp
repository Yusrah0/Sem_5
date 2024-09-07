#include<stdio.h>
int main(){
int t1=0,t2=1,n=8,t3;
printf("%d \n %d \n",t1,t2);
for(int i=1;i<=n;i++){
	t3=t1+t2;
	t1=t2;
	t2=t3;
	printf("%d \n",t3);
}	
return 0;
}
