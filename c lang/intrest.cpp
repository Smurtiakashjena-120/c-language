#include<stdio.h>
#include<math.h>


int main()
{
	int princpal,rateintrest,time,n;
	float intrest,cintrest;
	
	printf("enter the princpal amount,rate of intrest(in percent)),time respectively:");
	scanf("%d %d %d",&princpal,&rateintrest,&time);
	intrest=(princpal*time*rateintrest)/100;
	printf("enter the no of time the compound intrest applied:");
	scanf("%d",&n);
	
	cintrest=princpal*(pow((1+(rateintrest/100)),n));
	printf("the intrest is: %f \n",intrest);
	printf("the compound intrest is: %f",cintrest);
	
	
return 0;
}
