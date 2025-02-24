#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,r,z=0;
	printf("enter a number: ");
	scanf("%d",&n);
	num=n;
	while(num!=0){
		r=num%10;
		z=z+pow(r,3);
		num=num/10;
	}
	if(z==n){
		printf("%d number is an armstrong number",n);
	}
	else{
		printf("%d number is not an armstrong number",n);
	}
	return 0;
}
