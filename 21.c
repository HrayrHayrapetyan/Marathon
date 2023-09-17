#include <stdio.h>

int main()
{
	char ch;
	printf("Please Input Your Character ");
	scanf("%c",&ch);

        if(ch>=65 && ch<=122)
	{
	if(ch=='A' || ch=='a' || ch=='O' || ch=='o' || ch=='U' || ch=='u' || ch=='e' || ch=='E' || ch=='i' || ch=='I')
		printf("Vowel Character\n");
	else 
		printf("Consonant Character\n");

	}

}
