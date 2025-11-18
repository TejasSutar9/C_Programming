#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = 0;
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

    bRet = Check(ptr,iLength,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }

    else
    {
        printf("Number is not present");
    }

    free(ptr);

    return 0;
}