#include<stdio.h>
#include<string.h>

int binarytodecimal(int binary){
    int decimal=0,base=1,remainder;
    while(binary>0){
        remainder=binary%10;
        decimal+=remainder*base;
        binary/=10;
        base*=2;
    }
    return decimal;
}
int decimaltobinary(int decimal){
    int binary=0,base=1;
    while(decimal>0){
        binary+=(decimal%2)*base;
        decimal/=2;
        base*=10;
    }
    return binary;
}
void decimaltohexadecimal(int decimal){
    char hex[100];
    int index=0,i;
    while(decimal>0){
        int remainder=decimal%16;
        hex[index++]=(remainder<10) ? remainder+'0' : remainder-10+'A';
        decimal/=16;
    }
    for(i=index-1;i>=0;i--) printf("%c",hex[i]);
    printf("\n");
}
int hexadecimaltodecimal(const char *hex){
    int decimal=0,base=1,i;
    int length=strlen(hex);
    for(i=length-1;i>=0;i--){
        decimal+=isdigit(hex[i]) ? (hex[i]-'0')*base : (toupper(hex[i])-'A'+10)*base;
        base*=16;
    }
    return decimal;
}
void binarytohexadecimal(int binary){
    int decimal=binarytodecimal(binary);
    decimaltohexadecimal(decimal);
}
void hexadecimaltobinary(const char *hex){
    int decimal=hexadecimaltodecimal(hex);
    printf("Binary: %d\n",decimaltobinary(decimal));
}
int isvalidbinary(int binary){
    while(binary>0){
        if(binary%10>1) return 0;
        binary/=10;
    }
    return 1;
}
int isvalidhex(const char *hex){
	int i;
    for(i=0;i<strlen(hex);i++){
        if(!isxdigit(hex[i])) return 0;
    }
    return 1;
}

int main(){
    int choice,inputNumber;
    char hexInput[100];
    while(1){
        printf("\nSelect a conversion option\n");
        printf("1.Binary to Decimal\n");
        printf("2.Decimal to Binary\n");
        printf("3.Decimal to Hexadecimal\n");
        printf("4.Hexadecimal to Decimal\n");
        printf("5.Binary to Hexadecimal\n");
        printf("6.Hexadecimal to Binary\n");
        printf("0.Exit\n");
        printf("Enter your choice: ");
		scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter a binary number: ");
                scanf("%d",&inputNumber);
                if(isvalidbinary(inputNumber)){
                    printf("Decimal: %d\n",binarytodecimal(inputNumber));
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d",&inputNumber);
                if(inputNumber>=0){
                    printf("Binary: %d\n",decimaltobinary(inputNumber));
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 3:
                printf("Enter a decimal number: ");
                scanf("%d",&inputNumber);
                if(inputNumber>=0){
                    printf("Hexadecimal: ");
                    decimaltohexadecimal(inputNumber);
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s",hexInput);
                if(isvalidhex(hexInput)){
                    printf("Decimal: %d\n",hexadecimaltodecimal(hexInput));
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 5:
                printf("Enter a binary number: ");
                scanf("%d",&inputNumber);
                if(isvalidbinary(inputNumber)){
                    printf("Hexadecimal: ");
                    binarytohexadecimal(inputNumber);
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s",hexInput);
                if(isvalidhex(hexInput)){
                    hexadecimaltobinary(hexInput);
                }else{
                    printf("Invalid input.\n");
                }
                break;
            case 0:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
