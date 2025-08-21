#include<stdio.h>

int main()
{
    int number1,number2,division;
    
    printf("Enter first number:");
    scanf("%d",&number1);
    
    printf("Enter second number:");
    scanf("%d",&number2);
    
    division = number1/number2;
    
    printf("division: %d",division);
    
    return 0;
}
