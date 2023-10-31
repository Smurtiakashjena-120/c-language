#include<stdio.h>
int main(){
	int n;
	printf("hello \n");
	printf("enter the value:");
    scanf("%d",&n);
    int a[n];
    printf("enter elments:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("unsorted array: \n");
       for(int i =0;i<n;i++){
     	printf("%d",a[i]);
	 }
	 printf("\n");
	 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted is \n");
    
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
		}
	return 0;
}
