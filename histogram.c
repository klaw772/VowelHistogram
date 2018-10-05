#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
  char c;
  int aCount, eCount, iCount, oCount, uCount = 0;
  int numCount = 0;
  FILE *ptr = fopen("AssignmentTwo.txt", "r");
  while ((c = fgetc(ptr)) != EOF)
    {
      if (c=='a')
	{
	  aCount++;
	}
      else if (c=='e')
	{
	  eCount++;
	}
      else if (c=='i')
	{
	  iCount++;
	}
      else if (c=='o')
	{
	  oCount++;
	}
      else if (c=='u')
	{
	  uCount++;
	}
      else if (isdigit(c) != 0)
	{
	  numCount++;
	}
      else continue;
    }
  printf("Number of A's is %d\n", aCount);
  printf("Number of E's is %d\n", eCount);
  printf("Number of I's is %d\n", iCount);
  printf("Number of O's is %d\n", oCount);
  printf("Number of U's is %d\n", uCount);
  printf("Number of digits is %d\n", numCount);
  fclose(ptr);
  return 0;
}
