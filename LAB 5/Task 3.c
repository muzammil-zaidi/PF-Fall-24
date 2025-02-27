#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:\n",n);
	int i;
	for(i=0;i<n;i++){
		printf("enter number: ");
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if (arr[i]<min){	
			min=arr[i];
		}
	}
	printf("maximum number = %d\n",max);
	printf("minimum number = %d\n",min);
	return 0;
}
