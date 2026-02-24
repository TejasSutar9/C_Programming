#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits is: %d\n", iRet);

    return 0;
}