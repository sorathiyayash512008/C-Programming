#include <stdio.h>

int main()
{
    int a,b,temp;
    
    printf("Enter first value");
    scanf("%d",&a);
    
    printf("enter second value");
    scanf("%d",&b);
    
    printf("\nBefore swapping: a =%d , b=%d\n",a,b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf("\nAfter swapping: a=%d, b=%d\n",a,b);
    
    
    return 0;
}
