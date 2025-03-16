#include<stdio.h>
#define n 35
void temp(int t){
    static int count=0;
    if(t>n){
        count=count+1;  
        printf("Temperature %d°C exceeds the maximum allowed limit of 35°C.\n",t);
    }
    else{
        printf("Temperature %d°C is within the safe limit of 35°C.\n",t);
    }
    printf("Number of times temperature exceeded the limit: %d\n\n",count);
}

int main(){
    int i,t[]={35,43,33,38,40};
    for(i=0;i<5;i++){
        temp(t[i]);
    }
	return 0;
}
