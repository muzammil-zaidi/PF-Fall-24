#include<stdio.h>

int main(){
	int num1,num2,num3,greatest;
	
  printf("enter a 1st number:\n");
	scanf("%d",&num1);
	
  printf("enter a 2nd number:\n");
	scanf("%d",&num2);
	
  printf("enter a 3rd number:\n");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			greatest=num1;
		}	
	}
	else if(num2>num1){
		if(num2>num3){
			greatest=num2;
		}
	}
	else{
		greatest=num3;
	}
	printf("greatest number is:\n%d",greatest);
	
  return 0;
}
