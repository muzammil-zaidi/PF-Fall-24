#include<stdio.h>

void add(int num1, int num2){
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void subtract(int num1, int num2){
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void multiply(int num1, int num2){
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

void divide(int num1, int num2){
    if(num2 != 0){
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    }
    else{
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main(){
    int num1,num2;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation){
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}
