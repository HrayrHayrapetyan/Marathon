#include <stdio.h>

int main()
{
	int number;
	printf("Please Input Your Number ");
	scanf("%d",&number);
	

	if(number%2==0)
		printf("Even number\n");
	else 
		printf("Odd Number\n");
}
