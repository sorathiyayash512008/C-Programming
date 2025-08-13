#include<stdio.h>

int main()
{
    int num1,num2,add,substact,multiply,divide;
    
    printf("Enter first number :");
    scanf("%d",&num1);
    
    printf("Enter second number :");
    scanf("%d", &num2);
    
    add=num1+num2;
    substact=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;
    
    printf("add= %d",add);
    printf("substact= %d", substact);
    printf("multiply= %d", multiply);
    printf("Divide= %d",divide);
    
    return 0;
}
