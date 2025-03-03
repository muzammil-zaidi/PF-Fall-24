#include<stdio.h>
int main()
{
    int x,i,j;
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d",&x);
    
    for(i=1;i<=x;i++){
        for(j=i;j<x;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=x-1;i>=1;i--){
        for(j=x;j>i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
