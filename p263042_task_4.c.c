#include <stdio.h>
int main ()
{
	int a = 5;
	char b = 'D';
	float c = 4.44;
	double d = 876.45567;
	printf("Type name           Variable value               Size in Memory \n");
	printf("================================================================\n");
	printf(" char                 '%c'                            %zu bytes\n",b,(int)sizeof(b));
	printf("  int                  %d                             %zu bytes\n",a,(int)sizeof(a));
	printf(" float                  %.2f                         %zu bytes\n",c,(int)sizeof(c));
	printf(" double               %.5f                       %zu bytes\n",d,(int)sizeof(d));
	printf("================================================================");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
