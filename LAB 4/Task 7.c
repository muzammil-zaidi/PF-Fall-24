#include<stdio.h>
int main() 
{
    char x='A'; 
	int i;
    for(i=0;i<5;i++){
        printf("%c ",x+i);
    }
    printf("\n");
	for(i=1;i<=4;i++){
        printf("%c",x+i);
        printf("       ");
        printf("%c\n",x+i+4);
    }
    for(i=5;i<10;i++){
        printf("%c ",x+i);
    }
    return 0;
}
