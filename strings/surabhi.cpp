#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n;
printf("Enter Size:");
scanf("%d",&n);
fflush(stdin);
char a[n+1];

 scanf("%[^\n]s",a);

strupr(a);
int s=0;
for(int i=0;i<=26;i++)
{
	s=s+i;
}
printf("s is %d",s);
int sum=0;
for(int i=0;i<n+1;i++)
{
 if(a[i]!=' ')
 {
   int t=a[i]-'a';
   sum=sum+t;
 }
}
printf("sum is %d",sum);
for(int i=0;i<n+1;i++)
{
if(sum==s)
{
  printf(" pangram");
}
else
 printf(" not pangram");
}

return(0);
}