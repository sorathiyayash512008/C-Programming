#include<stdio.h>

int main ()
{
    float dollars,rupees;
    
    printf("Enter amount in dollars:");
    scanf("%f",&dollars);
    
    rupees = dollars*48;
    
    printf("Conversion:%f rupees",rupees);
    
    return 0;
}
