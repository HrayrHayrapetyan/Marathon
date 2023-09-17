#include <stdio.h>

int main()
{
	char sym;
	printf("Please Input Your Sym Character ");
	scanf("%c",&sym);

	if(sym>=48 && sym<=57)
		printf("True\n");
	else
		printf("False\n");


}
