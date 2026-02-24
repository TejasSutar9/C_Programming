#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    if(iStart < 1 || iEnd > 32 || iStart > iEnd)
    {
        return iNo;
    }
    
    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    printf("Enter start position: \n");
    scanf("%d", &iStart);

    printf("Enter end position: \n");
    scanf("%d", &iEnd);

    iRet = ToggleRange(iValue, iStart, iEnd);

    printf("Modified number is: %u\n", iRet);

    return 0;
}
