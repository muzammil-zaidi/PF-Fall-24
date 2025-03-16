#include<stdio.h>
int max,min,i;
void MaxMin(int arr[]){
    max=arr[0]; 
    min=arr[0]; 
	for (i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i]; 
        }
        if(arr[i]<min){
            min=arr[i]; 
        }
    }
}
int main()
{
    int arr[5]={6,7,3,9,5}; 
	MaxMin(arr);
	printf("Maximum number = %d\n",max);
    printf("Minimum number = %d\n",min);
    return 0;
}
