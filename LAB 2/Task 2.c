#include<stdio.h>

main()
{
	char operator;
	float num1,num2;
	
	printf("enter 1st number \n");
	scanf("%f",&num1);
	
	printf("enter 2nd number \n");
	scanf("%f",&num2);
	
	printf("enter an operator(+,-,*,/)\n ");
	scanf(" %c",&operator);
	
	switch(operator){
		case '+': 
			printf("%f",num1+num2);
		    break;	
		case '-':
			printf("%f",num1-num2);
			break;
		case '*': 
			printf("%f",num1*num2);
			break;
		case '/': 
			if(num2!=0){
				printf("%f",num1/num2);	
			}
			else{
				printf("Can't divide by zero");
			}
			break;
		default:
			printf("invalid operator");
	}

	return 0;
}
