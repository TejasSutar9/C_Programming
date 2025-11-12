//3
#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }

    return iFact;
}

//Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0; 

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of a number is : %d",iRet);

    return 0;
}