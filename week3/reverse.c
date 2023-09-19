#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,w,l,r=0;
    printf("enter the number:");
    scanf("%d",&m);
    
    for (n=m;n>0;)
    {
        n=n/10;
        l++;
    }
    l-=1;
    printf(" the length is%d \n",l);
     for(;l>=0;l--,m=m/10)
    {
        
        w=m%10;
       r+=(w)*pow(10,3);
        
        
       
       


        }
        printf("reverse is :%d",r);
   
    
    

   


    
    return 0;
}