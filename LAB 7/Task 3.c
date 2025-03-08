#include<stdio.h>

void prime(int n){
	int i,prime;
	if(n>1){
		for(i=2;i<n-1;i++){
			if(n%i==0){
				prime=0;
				break;
			}
			else{
				prime=1;
			}
		}
			if(prime){
		printf("%d is prime number",n);
	}
	else{
		printf("%d is not prime number",n);
	}
	}
	else{
		printf("%d is not prime number",n);
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	prime(n);
	return 0;
}
