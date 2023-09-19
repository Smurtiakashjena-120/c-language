#include<stdio.h>
/*jan=1,feb=2,mar=3,apr=4,may=5,june=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12*/

int main()
{
    int date,month,year;
    printf("enter date:");
    scanf("%d",&date);
    printf("enter month:");
    scanf("%d",&month);
    printf("enter year:");
    scanf("%d",&year);
    //if else logic


    if(date>31 || month>12)
    {
    printf("invalid input");
    }
    else if((month==4 || month==6 || month==9 || month==11)&& date ==31  )
    {
        printf("invalid input");
    } 
    else if (month==2 && date>29)
    {
        printf("invalid input");
    }
    else if(month ==2 && date==28)
    {
        if((year%4==0 &&(year%100!=0||year%400==0)))
	    {printf("it is a leap year \n");
       date+=1;
       month+=0;
        printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);

	    }
	     else 
	     {
        printf("it is not a leap year");
        month+=1;
      date=1;
       printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
        }
    }
    else if((month==1 || month==3 || month==5 || month==7 || month==8 ||month==10 ) && date==31)
    {
        date=1;
        month+=1;
         printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
    }
    else if((month==4 || month==6 || month==9 || month==11)  && date==30)
    {
        date=1;
        month+=1;
         printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
    }
   else if(date==31 && month ==12)
   {
    date=1;
    month=1;
    year+=1;
     printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
   }
   else if (month==2 && date==29)
   { if((year%4==0) &&(year%100!=0||year%400==0))
   {
     date=1;
     month+=1;
      printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
   }
     else 
     {
        printf("invalid input,this is not a leap year \n");
        
     }

   }
   else
   {
    date+=1;
    month+=0;
     printf("the next date is \n");
    
    printf("date= %d \n",date);
    printf("month= %d \n",month);
    printf("year= %d \n",year);
   }
    
    // printf("the next date is \n");
    
    // printf("date= %d \n",date);
    // printf("month= %d \n",month);
    // printf("year= %d \n",year);25




   
    return 0;
}

