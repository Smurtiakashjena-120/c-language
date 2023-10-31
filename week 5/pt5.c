/* Write a C program to reverse the array elements. Result should be updated in same array and do not 
just the print the values in reverse
Example: Input array: 1 2 3 4 5 
 Output: 5 4 3 2 1 */
 #include<stdio.h>
int main(){
    int i,j,n,t;
    float avg;
    printf("enter the value:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            
        }
    }
    printf("reverse is \n");
    for(i=0;i<n;i++){
        printf(" %d \n",a[i]);

    }
   
    
    return 0;
}