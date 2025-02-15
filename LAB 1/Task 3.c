#include <stdio.h>

int main()
{
	float salary,taxrate,taxamount;
	
	printf("Enter Salary:\n");
	scanf("%f",&salary);
	
	printf("Enter Tax Rate (in percentage):\n");
	scanf("%f",&taxrate);
	
	taxamount=(salary*taxrate)/100;
	printf("Tax Amount is %f\n",taxamount);
	
	return 0;
}
