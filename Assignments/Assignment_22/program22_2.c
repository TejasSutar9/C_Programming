#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency1 = 0, iFrequency2 = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }

    return (iFrequency1 - iFrequency2);
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(ptr == NULL)             
    {
        printf("Unable to allocate memory");
        return -1;              
    }

    printf("Enter %d elements",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iLength);

    printf("Difference between frequency of even and odd number : %d\n",iRet);

    free(ptr);

    return 0;
}