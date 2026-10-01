#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	c=a/b;
	printf("The division of two number is %.2f",c);
	return 0;
}