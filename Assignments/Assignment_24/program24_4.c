// Accept N number from user and display all such numbers which contains 3 digits in it

#include<Stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void DisplayDigits(int Arr[], int iLength)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt] >= 100) && Arr[iCnt] <= 999)
        {
            printf("%d \t",Arr[iCnt]);
        }
   }
  
}


int main()
{
    int iSize = 0, iCnt = 0;
    IPTR  iPtr = NULL;

    printf("Enter the numbers of elements : ");
    scanf("%d",&iSize);

    iPtr = (IPTR) malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayDigits(iPtr,iSize);

    free(iPtr);

    return 0;
}