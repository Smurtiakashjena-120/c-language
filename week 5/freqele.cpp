//freq of each element
#include<stdio.h>
int main(){
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    int count=1;
    for(int i=0;i<n;i++){
    	if(arr[i+1]==arr[i]){
    		count++;
		}
		else{
			printf(" the number %d freq is %d \n",arr[i],count);
			count=1;
		}
	}
	
	return 0;
	
}
