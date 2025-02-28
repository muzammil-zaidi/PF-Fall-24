#include<stdio.h>

int main(){
	int n;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	int count[n];
	int found=0;
	printf("enter %d elements:\n",n);
	int i;
	for(i=0;i<n;i++){
		count[i]=0;
	}
	for(i=0;i<n;i++){
		printf("enter number: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		count[arr[i]]++;
	}
	printf("elements occuring more than once: ");
	for(i=0;i<n;i++){
		if(count[i]>1){
			printf("%d ",i);
			found=1;
		}
	}
	if(!found){
		printf("none");
	}
	return 0;
}
