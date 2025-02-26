#include<stdio.h>
int main() 
{
    int i;
	for (i=0;i<5;i++){
        if(i==0){
            printf("* * * * *\n");
        }
        else if(i==1){
            printf("  *   *   \n");
        }
        else if(i==2){
            printf("    *    \n");
        }
        else if(i==3){
            printf("  *   *  \n");
        }
        else if(i==4){
            printf("* * * * *");
        }
    }
    return 0;
}
