#include<stdio.h>
int main()
{
	int bs,c;
	float p;
	printf("enter your basic sallery amount :");
	scanf("%d",&bs);
	printf("enter your city type(between 1 to 4):");
	scanf("%d",&c);
	if (c==1)
	{p=bs+(.16*bs)+(.44*bs)+(.08*bs);
	printf("your sallery is: %f",p);
	
	}
	else if (c==2)
	{p=bs+(.16*bs)+(.40*bs)+(.08*bs);
	printf("your sallery is: %f",p);
	
	}
	else if (c==3)
	{p=bs+(.16*bs)+(.34*bs)+(.08*bs);
	printf("your sallery is: %f",p);
	
	}
	else if (c==4)
	{p=bs+(.16*bs)+(.27*bs)+(.08*bs);
	printf("your sallery is: %f",p);
	
	}
    else 
    {printf("invalid input");
	}
	
	
	
	return 0;
}
