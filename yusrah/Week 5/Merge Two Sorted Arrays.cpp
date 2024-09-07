#include<stdio.h>
int main(){
	int n,m,k=0,g,f,arr1[15],arr2[15],res[30];
	printf("Enter the size of array 1\n");
	scanf("%d",&n);
	printf("Enter the size of array 2\n");
	scanf("%d",&m);
	printf("Enter the sorted values of array 1\t");
	for(int i=0;i<n;i++){
	scanf("%d",&arr1[i]);
}
	printf("Enter the sorted values of array 2\t");
	for(int i=0;i<n;i++){
	scanf("%d",arr2[i]);
}
g=n;f=m;
while(g!=0||f!=0){
if(arr1[n]>arr2[m]){
	res[k]=arr1[n];
	n--;
}
else{
	res[k]=arr2[m];
	m--;
}
k++;
	}
	printf("The merged array is: \n");
	for(int a=0;a<k;a++){
		printf("%d  ",res[a]);
	}
}

