#include<stdio.h>

int main()
{
	float cost,discount,finalamount,savedamount;
	
	printf("total cost is\n");
	scanf("%f",&cost);
	
	if(cost<500){
		printf("The Minimum amount for discount is 500");
		return 0;
	}
	if(cost<2000){
		discount=cost*0.05;
	}
	else if(cost<4000){
		discount=cost*0.1;
	}
	else if(cost<6000){
		discount=cost*0.2;
	}
	else{
	
		discount=cost*0.35;
	}
	savedamount=discount;
	finalamount=cost-discount;
	
	printf("actual amount is%f\n",cost);
	printf("saved amount is%f\n",discount);
	printf("final amount is%f\n",finalamount);
	
	return 0;
}
