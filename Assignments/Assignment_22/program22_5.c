#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency1 = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency1++;
        }
    }
    return iFrequency1;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr,iLength,iValue);

    printf("%d",iRet);

    free(ptr);

    return 0;
}