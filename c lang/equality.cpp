#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first num:");
	scanf("%d",&a);
	printf("enter the second num:");
	scanf("%d",&b);
	printf("enter the third num:");
	scanf("%d",&c);
	if((a==b) &&(b==c))
	{printf("the numbers are equal");
	}
	else 
	{printf("the numbers are not equal");
	}
	
	return 0;
}
