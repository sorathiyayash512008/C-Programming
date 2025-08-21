#include <stdio.h>

int main()
{
    float gross_sales,discount,net_sales;
    
    printf("Eneter Gross sales:");
    scanf("%f",&gross_sales);
    
    discount=0.10*gross_sales;
    net_sales=gross_sales-discount;
    
    printf("Net sale is %f",net_sales);
    
    return 0;
}
