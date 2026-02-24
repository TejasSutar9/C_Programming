#include<stdio.h>

//best aproach
int Sum(int iNo)
{
    if(iNo == 0)          // Base case
    {
        return 0;
    }

    return (iNo % 10) + Sum(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation is : %d",iRet);

    return 0;
}

/*
#Alternate method#(As I followed while learning)
Works for understanding concept, 
optimal solution should return value while unwinding recursion.

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;          // iDigit = Remainder
        iSum = iSum + iDigit;

        iNo = iNo / 10;
        
        Sum(iNo);
    }
    return iSum;
}

*/