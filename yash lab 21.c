#include <stdio.h>

int main()
{
    float gross_salary,allowance,deduction,net_salary;
    
    printf("Enter gross salary:");
    scanf("%f",&gross_salary);
    
    allowance = 0.10*gross_salary;
    deduction = 0.03*gross_salary;
    
    net_salary = gross_salary+allowance-deduction;
    
    printf("Net Salary: %f",net_salary);
    
    return 0;
}
