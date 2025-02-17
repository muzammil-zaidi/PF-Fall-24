#include<stdio.h>

int main()
{
	int num,sum,a,b,c,x;
	sum=0;
  
	printf("enter a number:\n");
	scanf("%d",&num);
  
	a=num%10;
	x=num/10;
	b=x%10;
	c=num/100;
	sum=a+b+c;
  
	if(sum>9){
		a=sum%10;
		x=sum/10;
		sum=a+x;
	}
	printf("sum of a digits of a number is\n%d",sum);
  
	return 0;
}
