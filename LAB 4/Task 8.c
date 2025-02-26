#include<stdio.h>
int main() 
{
    int i;
	for (i=0;i<5;i++){
        if(i==0){
            printf("A B C D E\n");
        }
        else if(i==1){
            printf("  C   F  \n");
        }
        else if(i==2){
            printf("    E    \n");
        }
        else if(i==3){
            printf("  E   H  \n");
        }
        else if(i==4){
            printf("F G H I J");
        }
    }
    return 0;
}
