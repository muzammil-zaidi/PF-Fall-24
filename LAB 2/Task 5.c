#include<stdio.h>

int main()
{
	char customername[50];
	int customerid,units;
	float amount,surcharge,netamount;
	
	printf("enter customer id:\n");
	scanf("%d",&customerid);
	
	printf("enter customer name:\n");
	scanf(" %s",&customername);
	
	printf("enter units  consumed:\n");
	scanf("%d",&units);
	
	if(units<200){
		amount=units*16.20;
	}
	else if(units<300){
		amount=units*20.10;
	}
	else if(units<500){
		amount=units*27.10;
	}
	else{
		amount=units*35.90;
	}
	if(amount>18000){
		surcharge=amount*0.15;
	}
	else{
		surcharge=0;
	}
	netamount=amount+surcharge;
	
	printf("\nbill details\n");
	printf("customer id: %d\n",customerid);
	printf("customer name: %s\n",customername);
	printf("units consumed: %d\n",units);
	printf("total amount @ Rs %.2f per unit: %.3f\n",(units<200) ? 16.20:(units<300) ? 20.10:(units<500) ? 27.10: 35.90,amount);
	printf("surcharge: %.3f\n",surcharge);
	printf("net amount paid by the customer: %.3f\n",netamount);
	
	return 0;
}
