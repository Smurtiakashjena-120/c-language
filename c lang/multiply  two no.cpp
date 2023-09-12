#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the two number in decimal form:");
	scanf("%f %f",&a,&b);
	int c=a*b;
	float d=a*b;
	printf("the integer form of product is: %d \n",c);
	printf("the float form of product is: %f",d);
	
	return 0;
}
