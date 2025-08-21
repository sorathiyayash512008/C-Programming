#include <stdio.h>

int main()
{
    float fehrenheit,celcius;
    printf("Enter fehrenheit");
    scanf("%f",&fehrenheit);
    
    celcius=(fehrenheit-32)*5/9;
    
    printf("conversion %f Celcius",celcius);
    
    return 0;
}
