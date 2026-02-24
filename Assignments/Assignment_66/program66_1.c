#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0;

    iMask = 1 << (iPos - 1);   // create mask for given position

    if ((iNo & iMask) == iMask)
    {
        return TRUE;           // bit is ON
    }
    else
    {
        return FALSE;          // bit is OFF
    }
}
int main()
{
    UINT iNo = 0;
    int iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iNo);

    printf("Enter position: ");
    scanf("%d", &iPos);

    bRet = ChkBit(iNo, iPos);

    if (bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
