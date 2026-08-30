#include <stdio.h>
int main ()
{
    double basic_salary = 85000.00;
    double HRA = 0.20 * basic_salary;
    double MA = 0.10 * basic_salary;
    double gross_salary = basic_salary + HRA + MA;
    double ITD = 0.50 * gross_salary;
    double net_salary = gross_salary - ITD;
    printf("=======================MONTHLY SALARY SLIP======================\n");
    printf("Basic Salary :         PKR %.2f\n",basic_salary);
    printf("House Rent Allowance (20%%):       PKR %.2f\n",HRA);
    printf("Medical Allowance (10%%) :          PKR %.2f\n",MA);
    printf("________________________________________________________________\n");
    printf("Gross Salary :                      PKR %.2f\n",gross_salary);
    printf("Tax Deduction :                     PKR %.2f\n",ITD);
    printf("________________________________________________________________\n");
    printf("Net Payable Salary :                PKR %.2f\n",net_salary); 


    return 0;
}
