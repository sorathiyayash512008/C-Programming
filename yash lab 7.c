#include<stdio.h>

int main()
{
    int hours,minutes;
    
    printf("Enter the number of minutes :");
    scanf("%d",&minutes);
    
    hours=minutes/60;
    
    printf("conversion: %d",hours);
    
    return 0;
    
}
