#include<stdio.h>

int main()
{
	int s1,s2,s3;
	printf("enter the length of 1st side:");
	scanf("%d",&s1);
		printf("enter the length of 2nd side:");
	scanf("%d",&s2);
		printf("enter the length of 3rd side:");
	scanf("%d",&s3);
	if ((s1==s2 )&&(s2==s3))
	{printf("it is an equilateral triangle");
	}
	else if ((s1==s2)||(s2==s3)||(s3==s1))
	{printf("it is a isosceles triangle");
	}
	else
	{printf("it is a scalen triangle");
	}
	return 0;
}
