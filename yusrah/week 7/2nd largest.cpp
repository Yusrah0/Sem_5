#include <stdio.h>
int max(int n,int a[]){
    int max=0,num;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            num=i;
        }
    }
  a[num]=a[n-1];
    return max;
}
int main() {
    int num=0,n,a[20];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the value of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
max(n,a);
n--;
int value=max(n,a);
printf("2nd largest element in an array is %d",value);
    return 0;
}