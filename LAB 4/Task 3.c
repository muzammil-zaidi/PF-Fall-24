#include<stdio.h>
int main()
{
	int n,flag=1;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n==1){
		printf("number is not prime\n");
		return 0;
	}
	else{
	
	int i;
	for ( i=2; i<=n-1;i++){
		if(n%i==0){
			flag=0;
			break;
	}
	}
	}
	if (flag==1){
		printf("number is prime\n");
		int a=0,b=1,t;
		printf("fibonacci series is");
		while(a<n){
			printf(" %d",a);
			t=a+b;
			a=b;
			b=t;
		}
		printf("\n");
	}
	else{
			printf("number is not prime");
	}
	
	
	return 0;
}
