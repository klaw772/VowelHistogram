//Kathleen Law and James Blash
//CS373 - Operating Systems
//Vowel and Digit Histogram

#include <stdio.h> //importing necessary libraries
#include <stdlib.h>

int main()
{
  int aCount=0; //initializing all variables to keep track of various counts
  int eCount=0;
  int iCount=0;
  int oCount=0;
  int uCount=0;
  int numCount=0;
  char c; //declaring variable to keep track of each character in the file
  FILE *ptr = fopen("AssignmentTwo.txt", "r"); //set file pointer to text file, read access only
  while ((c=fgetc(ptr))!=EOF) //while the tracker doesn't reach the end of the file
    {
      if (c=='a'||c=='A') //counts a
        aCount=aCount+1;
      if (c=='e'||c=='E') //counts e
        eCount=eCount+1;
      if (c=='i'||c=='I') //counts i
        iCount=iCount+1;
      if (c=='o'||c=='O') //counts o
        oCount=oCount+1;
      if (c=='u'||c=='U') //counts u
        uCount=uCount+1;
      if (isdigit(c) != 0) //counts digits
        numCount=numCount+1;
    }
  fclose(ptr); //closes file

  int countArray[6] = {aCount, eCount, iCount, oCount, uCount, numCount}; //sets array where each index contains a different count for vowel or digit
  int max = countArray[0];
  for (int i = 1; i <= 5; i++) //determines maximum value of the array
  {
    if (countArray[i] > max)
    {
      max = countArray[i];
    }
  }
  for (int i = max; i > 0; i--) //prints a star for each index of array when the value at each index is greater than or equal to the value of "i"
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
  for (int i = 1; i <= 6; i++) //prints numberings of each bar to be described in "legend" below
  {
    printf("%d  ", i);
  }
  printf("\n\n1. There are %d a's in this file.",aCount); //describes each bar in the histogram
  printf("\n2. There are %d e's in this file.",eCount);
  printf("\n3. There are %d i's in this file.",iCount);
  printf("\n4. There are %d o's in this file.",oCount);
  printf("\n5. There are %d u's in this file.",uCount);
  printf("\n6. There are %d digits in this file.\n",numCount);
  return 0;
}
