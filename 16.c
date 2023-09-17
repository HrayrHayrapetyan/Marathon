#include <stdio.h>

int main()
{
	short height;
	printf("Please Input The Height ");
	scanf("%hd",&height);

	if(height>=150)
		printf("You Are Compatible\n");
	else 
		printf("You Are Not Compatible\n");

}
