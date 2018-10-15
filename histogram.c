#include <stdio.h>
#include <stdlib.h>

void main()
{
  int aCount=0,eCount=0,iCount=0,oCount=0,uCount=0,sum=0;
  char c;
  FILE *ptr = fopen("AssignmentTwo.txt", "r");
  while ((c=fgetc(ptr))!=EOF)
    {
      if (c=='a'||c=='A')
        aCount=aCount+1;
      if (c=='e'||c=='E')
        eCount=eCount+1;
      if (c=='i'||c=='I')
        iCount=iCount+1;
      if (c=='o'||c=='O')
        oCount=oCount+1;
      if (c=='u'||c=='U')
        uCount=uCount+1;
    }
  sum=aCount+eCount+iCount+oCount+uCount;
  printf("\nThere are %d a's in this file.",aCount);
  printf("\nThere are %d e's in this file.",eCount);
  printf("\nThere are %d i's in this file.",iCount);
  printf("\nThere are %d o's in this file.",oCount);
  printf("\nThere are %d u's in this file.",uCount);
  printf("\nTotal no. of vowels in the text is %d.",sum);
  fclose(ptr);
  return 0;
}
