//Kathleen Law and James Blash
//we r ded

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int aCount=0;
  int eCount=0;
  int iCount=0;
  int oCount=0;
  int uCount=0;
  int numCount=0;
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
      if (isdigit(c) != 0)
        numCount=numCount+1;
    }
  fclose(ptr);

  int countArray[6] = {aCount, eCount, iCount, oCount, uCount, numCount};
  int max = countArray[0];
  for (int i = 1; i <= 5; i++)
  {
    if (countArray[i] > max)
    {
      max = countArray[i];
    }
  }
  for (int i = max; i > 0; i--)
  {
    for (int j = 0; j <= 5; j++)
    {
      if (countArray[j] >= i)
      {
        printf("*  ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  for (int i = 1; i <= 6; i++)
  {
    printf("%d  ", i);
  }
  printf("\n\n1. There are %d a's in this file.",aCount);
  printf("\n2. There are %d e's in this file.",eCount);
  printf("\n3. There are %d i's in this file.",iCount);
  printf("\n4. There are %d o's in this file.",oCount);
  printf("\n5. There are %d u's in this file.",uCount);
  printf("\n6. There are %d digits in this file.\n",numCount);
  return 0;
}
