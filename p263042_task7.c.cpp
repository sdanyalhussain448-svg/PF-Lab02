#include <stdio.h>
int main()
{
	float vi = 5.5;
	float a = 3.2;
	float t = 6.0;
	float fv = vi + (a * t);
	float s = (vi*t)+(0.5*a*t*t);
	printf("===============KINEMATICS MOTION REPORT====================\n");
	printf("Given Data is :\n");
	printf("Initial Velocity :               %.1f\n",vi);
	printf("Acceleration :                   %.1f\n",a);
	printf("Time Elapsed :                   %.1f\n",t);
	printf("_____________________________________________________________\n");
	printf("Calculated final velocity :                   %.2f\n",fv);
	printf("Calculated Distance :                         %.2f",s);
	        return 0;
	
	
	
	
	
	
	

}
