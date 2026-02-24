#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int Pos)
{
    UINT iMask = 0;

    iMask = 1 << (Pos - 1);     // create mask
    iNo = iNo ^ iMask;          // toggle bit

    return iNo;
}

int main()
{
    UINT iValue = 0, iPos = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iValue);

    printf("Enter Position : \n");
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue, iPos);

    printf("Modified Number is : %d",iRet);

    return 0;
}