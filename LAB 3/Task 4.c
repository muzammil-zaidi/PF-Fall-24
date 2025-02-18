#include<stdio.h>

int main(){
	int attendance;
	float assignment,exam,grade;
	
  printf("enter attendance\n");
	scanf("%d",&attendance);
	
  printf("enter assignment score (out of 100)\n");
	scanf("%f",&assignment);
	
  printf("enter exam score (out of 100)\n");
	scanf("%f",&exam);
	
  grade=assignment*0.5+exam*0.5;
	
  if(attendance>=80){
		if(grade>90){
			printf("final grade is A+\n");
		}
		else if(grade>80){
			printf("final grade is A\n");
		}
		else if(grade>70){
			printf("final grade is B\n");
		}
		else if(grade>60){
			printf("final grade is C\n");
		}
		else if(grade>50){
			printf("final grade is D\n");
		}
		else{
			printf("final grade is F\n");
		}
	}
	else{
		printf("final grade is F (due to attendance shortage)\n");
	}
	
  return 0;
}
