#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)      
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd) 
        {
            printf("%d ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    printf("\nEnter the Starting Point : ");
    scanf("%d",&iValue1);

    printf("\nEnter the Ending Point : ");
    scanf("%d",&iValue2);

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

    Range(ptr,iLength,iValue1,iValue2);

    free(ptr);

    return 0;
}