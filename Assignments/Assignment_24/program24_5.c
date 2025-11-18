// Accept N number from user and display summation of all digits of the number 

#include<Stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void SumDigits(int Arr[], int iLength)
{
   int iCnt = 0, iSum = 0, iNo = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo/10;
        }

        printf("%d \t",iSum);
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

    SumDigits(iPtr,iSize);

    

    free(iPtr);

    return 0;
}