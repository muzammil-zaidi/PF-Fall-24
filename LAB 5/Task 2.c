#include<stdio.h>
int main()
{
	int n;
 	printf("enter the number of elements: ");
 	scanf("%d",&n);
 	int arr[n];
 	printf("enter %d elements:\n", n);
 	int i;
	for(i=0;i<n;i++){
		printf("enter number: ");
 		scanf("%d", &arr[i]);
 	}
 	printf("reverse order is: ");
	for (i=n-1;i>=0;i--){
 		printf("%d ", arr[i]);
 	}
 	return 0;
}
