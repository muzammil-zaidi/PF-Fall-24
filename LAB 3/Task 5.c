#include<stdio.h>

int main(){
	int age;
	float income,credit;
	
  printf("enter age:\n");
	scanf("%d",&age);
	
  printf("enter income:\n");
	scanf("%f",&income);
	
  printf("enter credit score:\n");
	scanf("%f",&credit);
	
  if(age>=18 && age<=60 && income>=25000 && credit>=1000){
			printf("eligible for a loan\n");
		}
	else{
		printf("not eligible for a loan\n");
		}
	
  return 0;
}
