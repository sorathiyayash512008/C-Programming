#include<stdio.h>

int main()
{
    int number1,number2,add,sub,mul,div;
    
    printf("Enter first number:");
    scanf("%d",&number1);
    
    printf("Enter second number:");
    scanf("%d",&number2);
    
    add=number1+number2;
    sub=number1-number2;
    mul=number1*number2;
    div=number1/number2;
    
    printf("sum: %d",add);
    printf("substraction: %d",sub);
    printf("multiplication: %d",mul);
    printf("division: %d",div);
    
    return 0;
}
