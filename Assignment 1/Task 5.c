#include<stdio.h>
void horizontal(int values[],int count){
    printf("Horizontal Histogram\n");
    int i,j;
    for(i=0;i<count;i++){
        printf("Value %d: ",i+1);
        for(j=0;j<values[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
void vertical(int values[],int count){
    int max=0,j;
    for(j=0;j<count;j++){
        if(values[j]>max){
            max=values[j];
        }
    }
    printf("Vertical Histogram\n");
    int level;
    for(level=max;level>0;level--){
        for(j=0;j<count;j++){
            if(values[j]>=level){
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for(j=0;j<count;j++){
        printf("%d  ",values[j]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int values[n];
    printf("Enter %d values:\n",n);
    int i;
    for(i=0;i<n;i++){
        printf("Value %d: ",i+1);
        scanf("%d",&values[i]);
    }
    horizontal(values,n);
    vertical(values,n);
    return 0;
}
