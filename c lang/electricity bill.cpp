#include<stdio.h>
int main()
{
	float hour,a,b,c;
	printf("enter the amount of hour you consumed:");
	scanf("%f",&hour);
	if(hour<200)
	{a=hour*5;
	printf("your bill amount is : %f",a);
	
	}
	else if (hour>=200 && hour<500)
	{b=hour*7.5;
	printf("your bill amount is : %f",b);
	}
	else
	{c=hour*10;
	printf("your bill amount is : %f",c);
	}
	return 0;
	
}
