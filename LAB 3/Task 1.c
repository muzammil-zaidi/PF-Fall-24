#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:\n");
	scanf("%d",&year);
	if(year%4==0){
		printf("leap year\n");
	}
	else{
		printf("not a leap year");
	}
	return 0;
}
