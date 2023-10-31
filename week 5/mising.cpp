#include<stdio.h>
int main(){
	int arr[]={1,2,4,6,3,7,8};
	int n=7;
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
			
	}
	printf("maximum is %d \n",max);
	int sum=0;
	for (int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	int sum1=0;
	for(int i=1;i<=max;i++){
		sum1=sum1+i;
	}
	int missing=sum1-sum;
	printf("the misssing is %d",missing);
	return 0;
}
