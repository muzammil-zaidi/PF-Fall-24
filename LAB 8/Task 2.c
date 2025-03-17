#include<stdio.h>
#define conversion 0.001

float kilometer(float m){
    float km;
    static int count=0;
    count++;
    km=m*conversion;
    printf("Function has been called %d times.\n",count);
    return km;
}

int main(){
    float m,km;
    printf("Enter distance in meters: ");
    scanf("%f",&m);
    km=kilometer(m);
    printf("%.2f meters is equal to %.3f kilometers.\n", m,km);

    printf("\nEnter another distance in meters: ");
    scanf("%f",&m);
    km=kilometer(m);
    printf("%.2f meters is equal to %.3f kilometers.\n",m,km);
    return 0;
}
