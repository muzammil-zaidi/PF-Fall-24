#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<35;i++){
		if(i%6==0){
			printf("\n");
		}
		if(i<6 || i>30 || i%6==0 || (i+1)%6==5){
			printf("* ");
		}
		else{
			printf("  ");
		}
	}
	return 0;
}
