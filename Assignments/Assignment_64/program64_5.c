typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;             // 1st bit + 32nd bit mask

    if((iNo & iMask) == iMask)
    {
        return TRUE;                    // both bits are ON
    }

    else
    {
        return FALSE;                   // any one or both bits are OFF
    }
}