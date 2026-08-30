#include <stdio.h>
int main()
{
	float PF_marks = 88.0; int PF_credit_hours = 3.0;
	float CAG_marks = 76.5; int CAG_credit_hours = 3;
	float AP_marks = 82.0; int AP_credit_hours = 2;
	int total_credits = 3+3+2;
	
	float total_weighted_score = (88.0*3)+(76.5*3)+(82.0*2);
	float weighted_average_percentage = total_weighted_score/total_credits;
	
	
	printf("===================== SEMESTER ACADEMIC REPORT===================\n");
	printf("Course                      Credit Hours             Obtrained marks\n");
	printf("__________________________________________________________________\n");
	printf("Programing Fundamentals      %d                         %.1f\n",PF_credit_hours,PF_marks);
	printf("Calculus                     %d                         %.2f\n",CAG_credit_hours,CAG_marks);
	printf("Applied Physics              %d                         %.2f\n",AP_credit_hours,AP_marks);
	printf("___________________________________________________________________\n");
	printf("Total credits :          %d    Weighted Average         %.2f%% \n",total_credits,weighted_average_percentage);
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

