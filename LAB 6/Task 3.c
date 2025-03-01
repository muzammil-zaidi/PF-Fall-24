#include<stdio.h>
int main(){
    int m[3][3];
    int i,j,k,min,saddle,index,found;

    printf("enter the elements of a (3x3) matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<3;i++){
        min=m[i][0];
        index=0;
        for(j=1;j<3;j++){
            if(m[i][j]<min){
                min=m[i][j];
                index=j;
            }
        }
        saddle=1;
        found=1;
        for(k=0;k<3;k++){
            if(m[k][index]>min){
                saddle=0;
                found=0;
                break;
            }
        }
        if(saddle){
            printf("saddle point found at matrix[%d][%d] = %d\n",i,index,min);
        }
    }
    if(!found){
    	printf("no saddle point found in above matrix");
	}
    return 0;
}
