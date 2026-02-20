#include <stdio.h>

int main()
{
    float num1,num2;
    char operator;
    printf("simple calculator\n");
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter second number:");
    scanf("%f",&num2);
    switch(operator){
        case'+':
        printf("result=%.2f",num1+num2);
        break;
        case'-':
        printf("result=%.2f",num1-num2);
        break;
        case'*':
        printf("result=%.2f",num1*num2);
        break;
        case'/':
        if(num2!=0) 
        printf("result=%.2f",num1/num2);
        else
        printf("error division by zero is not allowed.");
        break;
        default:
        printf("invalid operator!");
    }

    return 0;
}
