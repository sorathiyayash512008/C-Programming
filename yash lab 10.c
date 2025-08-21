#include<stdio.h>

int main()
{
    float dollars,rupees,pounds;
    
    printf("Enter dollars:");
    scanf("%f",&dollars);
    
    rupees=dollars*48;
    pounds=rupees/70;
    
    printf("conversion of dollar to pounds is %f Pounds",pounds);
     
    return 0;
}






