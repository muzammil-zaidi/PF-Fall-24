#include <stdio.h>
#include<math.h>

int main()
{
	float p,n,r,Cl;
	
	printf("Enter p:\n");
	scanf("%f",&p);
	
	printf("Enter n:\n");
	scanf("%f",&n);
	
	printf("Enter r:\n");
	scanf("%f",&r);
	
	Cl=p*pow((1+r/100),n)-p;
	printf("Compound Interest is %f\n",Cl);
	
	return 0;
}
