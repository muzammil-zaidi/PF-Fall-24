#include<stdio.h>
#include<limits.h>

int main(){    
    int i,min,s_min;
    int arr[5];
    printf("Input 5 elements in the array \n");
    for(i=0;i<5;i++){
        printf("Element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    int index=0;
    min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]==min){
            arr[i]=INT_MAX;
        }
    }
    s_min=arr[index];
    for(i=0;i<5;i++){
        if(arr[i]<s_min){
            s_min=arr[i];
        }
    }
    printf("The second smallest element in the array is %d",s_min);
}
