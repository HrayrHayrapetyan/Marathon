#include <stdio.h>

int main()
{
	char expression[]="A && B || !B ^ A";
	printf("%s\n",expression);

	printf("A->0 B->0 exp-1\n");
	printf("A->1 B->0 exp-0\n");
	printf("A->0 B->1 exp-0\n");
	printf("A->1 B->1 exp-1\n");
}

