#include<stdio.h>
#include<math.h>


int main()
{
	float a,m,cm,mm;
	printf("enter the distance in km:");
	scanf("%f",&a);
	m=a*1000;
	cm=m*100;
	mm=cm*10;
	printf("the value in meter= %f meter \n",m);
	printf("the value in centimeter= %f cm \n",cm);
	printf("the value in milimeter= %f mm \n",mm);
	
	

	return 0;
}
	
