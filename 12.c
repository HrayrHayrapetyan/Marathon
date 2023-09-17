#include <stdio.h>


int main()
{
  char str[10];
  int ispalindrome=1;
  printf("Please Input Your Text ");
  scanf("%10s",str);


  for(int i=0;i<sizeof(str)/2;++i)
  {
	  if(str[i]!=str[sizeof(str)-1-i])
	  {
		  ispalindrome=0;
		  break;
	  }
  }

  if(ispalindrome==0)
	  printf("False\n");
  else
  printf("True\n");


}
