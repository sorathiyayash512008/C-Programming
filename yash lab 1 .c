#include<stdio.h>
 
int main()
{
    int number1,number2,addition;
    
    printf("Enter first number:");
    scanf("%d",&number1);
    
    printf("Enter second number:");
    scanf("%d",&number2);
    
    addition = number1+number2;
    
    printf("sum : %d", addition);
    
    return 0;
}
