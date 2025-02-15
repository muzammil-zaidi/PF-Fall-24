#include <stdio.h>

int main()
{
	float slope;
	int x1=5,y1=4;
	int x2=3,y2=2;
	
	slope=(y2-y1)/(x2-x1);
	
	printf("The slope of two points is %.3f",slope);
	
	return 0;
}
