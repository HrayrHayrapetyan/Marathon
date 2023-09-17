#include <stdio.h>

int main()
{
	char sym;
	printf("Please Input Your Sym Character ");
	scanf("%c",&sym);

	if(sym>=97 && sym<=122)
		printf("Already A Lowercase Letter\n");
	else if(sym>=65 && sym<=97)
		printf("%c\n",sym+32);
	else
		printf("The Character You Entered Is Not  A Letter\n");
}
