#include<stdio.h>
int main()
{
	int sum,n;
	while(n!=0){
		printf("enter a number: ");
		scanf("%d",&n);
		sum=sum+n;
		printf("number is %d and the sum is %d\n",n,sum);
	}
	return 0;	
}
