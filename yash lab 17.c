#include <stdio.h>

int main()
{
    float length,area,perimeter;
    printf("Length of square:");
    scanf("%f",&length);
    
    area=length*length;
    perimeter=4*length;
    
    printf("Area of square:%f",area);
    printf("Perimeter of square:   %f",perimeter);
    
    return 0;
}
