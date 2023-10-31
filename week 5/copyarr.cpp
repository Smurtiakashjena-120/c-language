#include<stdio.h>
int main(){
		int n;
    printf("enter size :");
    scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("adress of entered arr is %d \n",&arr1);
	printf("entered array : \n");
	for(int i=0;i<n;i++){
		printf("%d, ",arr1[i]);
	}
	for(int j=0;j<n;j++){
		arr2[j]=arr1[j];
	}
	printf("adress of new arr is %d \n",&arr2);
	printf("new array is: \n");
	for(int i=0;i<n;i++){
		printf("%d, ",arr2[i]);
	}
	
	return 0;
}
