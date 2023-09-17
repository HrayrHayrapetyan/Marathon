#include <stdio.h>

int main()
{
	short age;
	printf("Please Input Your Age ");
	scanf("%hd",&age);

	if(age<18)
		printf("You Are Underage\n");
	else if(age>=18 && age<=65)
		printf("You Are An Adult\n");
	else if(age>65)
		printf("You Are An Old Man\n");
		


}
