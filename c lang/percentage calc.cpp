#include<stdio.h>
int main()
{
	int per, math,sci,eng,hindi,cs;
	printf("enter your subject mark:");
	scanf("%d %d %d %d %d",&math,&sci,&eng,&hindi,&cs);
	per= (math+sci+hindi+eng+cs)/5;
	printf("your percentage is %d %%",per);
	
	return 0;
}
