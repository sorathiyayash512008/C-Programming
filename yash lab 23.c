#include <stdio.h>

int main()
{
    float sub1,sub2,sub3,total,avarage;
    
    printf("marks of subject1");
    scanf("%f",&sub1);
    
    printf("marks of subject2");
    scanf("%f",&sub2);
    
    printf("marks of subject3");
    scanf("%f",&sub3);
    
    total=sub1+sub2+sub3;
    avarage=total/3;
    
    printf("total marks is %f",total);
    printf("Avarage marks is %f",avarage);
    
    return 0;
}
