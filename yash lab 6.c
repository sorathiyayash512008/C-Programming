#include<stdio.h>

int main()
{
    int hours,minutes;
    
    printf("Enter the number of hours");
    scanf("%d",&hours);
    
    minutes = hours* 60;
    
    printf(" conversition : %d",minutes);
    
    return 0;
    
}
