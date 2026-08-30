#include <stdio.h>
int main()
{
	double principal = 250000.00;
	float rate = 8.5;
	int time = 3;
	double I = (principal*rate*time)/100.0;
	double TPA = principal + I;
	double MI = TPA/(time*12.0);
	
	  
	printf("=================BANK LOAN INTEREST==================\n");
	printf("Pricipal ammount :                  %.2f\n",principal);
	printf("Annual Interest Rate :              %.2f\n",rate);
	printf("Loan Duration :                     %.2f\n",time);
	printf("_____________________________________________________\n");
	printf("Total Accured Interest :             %.2f\n",I);
	printf("Total Payable Ammount :              %.2f\n,",TPA);
	printf("Monthly Installment :                %.2f\n",MI);
	
	return 0;
}
