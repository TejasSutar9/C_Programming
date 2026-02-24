#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int Pos1, int Pos2)
{
    UINT iMask1 = 0, iMask2 = 0, iMask = 0;

    // position validation (important)
    if(Pos1 < 1 || Pos1 > 32 || Pos2 < 1 || Pos2 > 32)
    {
        return FALSE;
    }

    iMask1 = 1 << (Pos1 - 1);
    iMask2 = 1 << (Pos2 - 1);

    iMask = iMask1 | iMask2;

    if(iNo & iMask)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: \n");
    scanf("%u", &iValue);

    printf("Enter 1st position: \n");
    scanf("%d", &iPos1);

    printf("Enter 2nd position: \n");
    scanf("%d", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
