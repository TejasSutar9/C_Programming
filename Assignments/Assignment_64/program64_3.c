typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040;             // 7th, 15th, 21st, 28th bit mask

    if((iNo & iMask) == iMask)
    {
        return TRUE;                    // 7th, 15th, 21st and 28th bits are ON
    }

    else
    {
        return FALSE;                   // any one or more bits are OFF
    }
}