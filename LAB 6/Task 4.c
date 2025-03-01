#include<stdio.h>
int main()
{
    int m1[3][3],m2[3][3],result[3][3],i,j,k;

    printf("Enter elements of the first 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enter elements of the second 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=0;
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                result[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    printf("Result after multiplication:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d  ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
