//4
#include<stdio.h>
int SumOfEvenFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    printf("Even Factors are : \n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumOfEvenFactors(iValue);

    printf("Sum of all factors are : %d",iRet);

    return 0;
}