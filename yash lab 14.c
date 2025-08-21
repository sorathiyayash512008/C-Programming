#include <stdio.h>

int main()
{
    float celcius,fehrenheit;
    printf("Enter celcius");
    scanf("%f",&celcius);
    
    fehrenheit = (celcius*9/5)+32;
    
    printf("conversion %f Fehrenheit",fehrenheit);
    
    return 0;
}
