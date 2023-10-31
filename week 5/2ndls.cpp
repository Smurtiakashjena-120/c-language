#include<stdio.h>
int main(){
	int i,j,k,n;
	int arr[n];
	printf("enter size");
	scanf("%d",&n);
	printf ("enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<2;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("2nd latgest: %d",arr[n-2]);
     printf("2nd smallest: %d",arr[1]);
	return 0;
}
