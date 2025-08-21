#include <stdio.h>

int main()
{
    float kilograms,grams;
    
    printf("Enter kilograms");
    scanf("%f",&kilograms);
    
    grams=kilograms*1000;
    
    printf("conversion %f Grams",grams);
    
    return 0;
}
