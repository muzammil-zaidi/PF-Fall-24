#include<stdio.h>

int main(){
    int n1,n2,n,i,prime,primefound;
    
    printf("enter the start of range: ");
    scanf("%d",&n1);
    printf("enter the end of range: ");
	scanf("%d",&n2);
	printf("prime numbers between %d and %d are:\n",n1,n2);
	
    for(n=n1;n<=n2;n++){
        if(n<2) 
		continue;
        prime=1;
        for(i=2;i<=n-1;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }

        if(prime){
            printf("%d ",n);
            primefound=1;
        }
    }
    
    if(!primefound){
        	printf("no prime number found between this range");
	}
    return 0;
}
