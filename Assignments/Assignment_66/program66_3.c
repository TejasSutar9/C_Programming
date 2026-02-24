#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0;

    iMask = 1 << (iPos - 1);   // create mask for given position

    iNo = iNo | iMask;         // ON that bit

    return iNo;
}

int main()
{
    UINT iNo = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    printf("Enter position: ");
    scanf("%d", &iPos);

    iRet = OnBit(iNo, iPos);

    printf("Modified Number : %d",iRet);

    return 0;
}