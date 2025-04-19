#include<stdio.h>

int matchstick(int n){
    if(n%5==0){
        return 0;
    }
	else{
        return n%5;
    }
}

int main(){
    int n;
    printf("Enter the number of matchsticks: ");
    scanf("%d",&n);
    int result=matchstick(n);
    if (result==0){
        printf("It is impossible to win for A\n");
    } else {
        printf("A should pick %d matchsticks to guaranteed a win.\n",result);
    }
    return 0;
}
