//3
#include<stdio.h>
int SumOfFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    printf("Factors are : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumOfFactors(iValue);

    printf("Sum of all factors are : %d",iRet);

    return 0;
}