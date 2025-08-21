#include<stdio.h>

int main()
{
    float rupees,dollars;
    
    printf("Enter amount in Rupees:");
    scanf("%f",&rupees);
    
    dollars=rupees/48;
    
    printf("conversation %f dollars",dollars);
    
    return 0;
}
