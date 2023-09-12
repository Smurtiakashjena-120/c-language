#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number as a,b:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swap form of a,b is: %d ,%d",a ,b);
return 0;
}
