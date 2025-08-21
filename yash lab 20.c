#include <stdio.h>

int main()
{
    float base,hight,area;
    
    printf("Base of triangle");
    scanf("%f",&base);
    
    printf("hight of triangle");
    scanf("%f",&hight);
    
    area= 0.5*base*hight;
    
    printf("area of triangle is %f",area);
    
    return 0;
}
