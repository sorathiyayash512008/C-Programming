#include<stdio.h>

int main()
{
    int number1,number2,substract;
    
    printf("Enter first number:");
    scanf("%d",&number1);
    
    printf("Enter second number");
    scanf("%d",&number2);
    
    substract = number1-number2;
    
    printf("result : %d",substract);
    
    return 0;
}
