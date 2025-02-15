#include <stdio.h>

int main()
{
	float vi,vf,t,a;
	
	printf("Enter Initial Velocity:\n");
	scanf("%f",&vi);
	
	printf("Enter Final Velocity:\n");
	scanf("%f",&vf);
	
	printf("Enter Time:\n");
	scanf("%f",&t);
	
	a=(vf-vi)/t;
	printf("Acceleration is %f\n",a);
	
	return 0;
}
