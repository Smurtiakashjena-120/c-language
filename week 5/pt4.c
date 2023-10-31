/* Write a C program to interchange alternate elements in an even sized array
Example: Input array: 1 2 3 4 5 6
 Output: 2 1 4 3 6 5 */
 #include<stdio.h>
 int main(){
    int i,t;
    int a[6]={1,2,3,4,5,6};
    for(i=0;i<5;i++){
        if((i+1)%2!=0){
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
        }
    }
    printf("the output is : \n");
    for(i=0;i<6;i++){
        
        printf("%d \n",a[i]);
    }
    return 0;
 }