#include<stdio.h>

int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}

int main(){
    int a,b,c;
    printf("Enter base (a): ");
    scanf("%d",&a);
    printf("Enter exponent (b): ");
    scanf("%d",&b);
    c=power(a,b);
    printf("%d raised to the power of %d is %d\n",a,b,c);
    return 0;
}
