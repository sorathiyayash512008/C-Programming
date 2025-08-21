#include <stdio.h>

int main()
{
    float length,width,area,perimeter;
    
    printf("Enter length of rectangle");
    scanf("%f",&length);
    
    printf("Enter width of rectangle");
    scanf("%f",&width);
    
    area=length*width;
    perimeter= 2*(length+width);
    
    printf("Area is %f",area);
    printf("Perimeter is %f",perimeter);
    
    return 0;
}
