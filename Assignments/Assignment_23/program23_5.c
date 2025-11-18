#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iPro = 1, iOddfound = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iPro = iPro * Arr[iCnt];
            iOddfound = 1;
        }
    }
    if(iOddfound == 0)   // No odd numbers found
    {
        return 0;
    }
    return iPro;
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

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr,iLength);

    printf("Product of all odd elements : %d",iRet);

    free(ptr);

    return 0;
}