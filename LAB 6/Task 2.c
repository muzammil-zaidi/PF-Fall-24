#include<stdio.h>

int main(){
    int n,i,count=1;
    printf("enter an odd number to start the pattern: ");
    scanf("%d",&n);
    
    if(n%2==0){
        printf("please enter an odd number\n");
        return 0;
    }
    while(n>=1){
        for(i=0;i<count && n>=1;i++){
            printf("%2d  ",n);
            n=n-2;
        }
        printf("\n");
        count++;
	}
    return 0;
}
