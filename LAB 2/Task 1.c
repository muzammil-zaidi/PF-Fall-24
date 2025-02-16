#include<stdio.h>

int main()
{
	int number;
	
	printf("enter a number\n");
	scanf("%d",&number);
	
	if(number%3==0)
	{
		printf("this number is multiple of 3\n");
}

   	else{
	   
		printf("this number is not multiple of 3\n");	
	}
	
	return 0;
}
