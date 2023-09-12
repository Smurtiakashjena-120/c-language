#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number in form of a,b:");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("the swap form of a,b is: %d , %d",a,b);
	return 0;
}
