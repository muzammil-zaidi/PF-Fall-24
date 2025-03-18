#include<stdio.h>
int count(int n,int t){
    if(n==0){
        return 0;
    }
    if (n%10==t){
        return 1+count(n/10,t); 
    }
    else{
        return count(n/10,t);
    }
}

int main() {
    int n,t,output;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter target digit: ");
    scanf("%d",&t);
    output=count(n,t);
    printf("The digit %d appears %d times in the number %d.\n",t, output,n);
    return 0;
}
