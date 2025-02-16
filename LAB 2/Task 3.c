#include<stdio.h>

int main()
{
	char ch;
	
	printf("enter a character\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("given character is small alphabet\n",ch);
	}
	else if(ch>='A' && ch<='Z'){
		printf("given character is capital alphabet\n",ch);
	}
	else if(ch>='1' && ch<='9'){
		printf("given character is digit\n",ch);
	}
	else{
		printf("given character is special character\n",ch);
	}
	return 0;
}
