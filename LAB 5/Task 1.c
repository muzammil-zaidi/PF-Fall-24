#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:\n",n);
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		printf("enter number: ");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum of elements is %d\n",sum);
	return 0;
}
