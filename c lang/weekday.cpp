#include<stdio.h>

int main()
{
	int a;
printf("Enter the day number(it should be between 1 to 7):");
scanf("%d",&a);
if (a==1)
{printf("it is sunday");
}
else if (a==2)
{printf("it is monday");
}
else if (a==3)
{printf("it is tuesday");
}
else if (a==4)
{printf("it is wednesday");
}
else if (a==5)
{printf("it is thursday");
}
else if (a==6)
{printf("it is friday");
}
else if (a==7)
{printf("it is saturday");
}
else 
{printf("input is invalid");
}
	return 0;
}
