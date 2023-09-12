#include<stdio.h>
int main()
{
	float per;
	printf("enter your percentage:");
	scanf("%f",&per);
	if(per>=90)
	{printf("you got A grade");
	}
	else if (per>=80)
		{printf("you got B grade");
	}
	else if (per>=70)
		{printf("you got C grade");
	}
	else if (per>=60)
		{printf("you got D grade");
	}
	else if (per>=40)
		{printf("you got E grade");
	}
	else
		{printf("you got F grade");
	}
	return 0;
}
