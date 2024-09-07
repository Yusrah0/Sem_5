 #include<stdio.h>
int main(){
	float a,b;
	printf("Enter the two number\n");
	scanf("%f %f",&a,&b);
	char c;
	printf("Enter the operation you want to perform\n");
	scanf("%s",&c);
	switch (c) {
		case '+':
			printf("%.2f + %.2f = %.2f",a,b,a+b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f",a,b,a-b);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f",a,b,a*b);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f",a,b,a/b);
			break;
		default:
			printf("Operator is not correct");
	}
	 return 0;
}
