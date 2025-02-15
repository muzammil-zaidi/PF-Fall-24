#include <stdio.h>

int main()
{
	float vf,vi,t,a;
	
	printf("Enter Initial Velocity:\n");
	scanf("%f",&vi);
	
	printf("Enter Time:\n");
	scanf("%f",&t);
	
	printf("Enter Acceleration:\n");
	scanf("%f",&a);
	
	vf=vi+(a*t);
	printf("Final velocity is %f\n",vf);
		
	return 0;
}
