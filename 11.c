#include <stdio.h>


int main()
{

	char str[50];int vowelcount=0,consonantcount=0;
	printf("Please Input Your Text ");
	scanf("%s",&str);


	for(int i=0;i<sizeof(str);++i)
	{
		char ch=str[i];
                  
		if(ch>=65 && ch<=122)
		{
		
		if(ch=='a' || ch=='A' || ch=='O' || ch=='o' || ch=='E' || ch=='e' || ch=='u' || ch=='U' || ch=='i' || ch=='I')
			++vowelcount;
		else 
			++consonantcount;
		}
	         	
	}

	printf("The Vowel Count is %d\n",vowelcount);

	printf("The Consonant Count is %d\n",consonantcount);


}
