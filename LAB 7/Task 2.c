#include<stdio.h>

void swap(int n1,int n2){
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("A=%d , B=%d",n1,n2);
}

int main()
{
	int n1,n2;
	printf("Enter A = ");
	scanf("%d",&n1);
	printf("Enter B = ");
	scanf("%d",&n2);
	swap(n1,n2);
	
	return 0;
}
