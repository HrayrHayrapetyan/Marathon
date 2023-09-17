#include <stdio.h>


int main()
{
	double temp;

	printf("Please Input The Temperature ");
	scanf("%lf",&temp);

	printf("The Temperature In Farenheit is %lf\n",(temp*9/5+32));
}
