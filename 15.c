#include <stdio.h>

int main()
{
	short grade;
	printf("Please Input The Grade ");
	scanf("%hd",&grade);

	if(grade>=90 && grade<=100)
		printf("Class A\n");
	else if(grade>=80 && grade<=89)
		printf("Class B\n");
	else if(grade>=70 && grade<=79)
		printf("Class C\n");
	else if(grade>=60 && grade<=69)
		printf("Class D\n");
	else if(grade<60)
		printf("Class E\n");
}
