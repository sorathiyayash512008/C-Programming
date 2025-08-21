

#include <stdio.h>

int main()
{
    float grams,kilograms;
    printf("Enter grams:");
    scanf("%f",&grams);
    
    kilograms=grams/1000;
    
    printf("Conversation %f Kilograms",kilograms);
    
    return 0;
}
