#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = 0;
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

    bRet = Check(ptr,iLength);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }

    else
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;
}