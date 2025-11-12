//2
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollarValue = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo > 0)
    {
        iDollarValue = iNo * 70;
    }
    return iDollarValue;
}

//Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}