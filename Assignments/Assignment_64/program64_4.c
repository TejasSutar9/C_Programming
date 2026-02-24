typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;             // 7th, 8th, 9th bit mask

    if((iNo & iMask) == iMask)
    {
        return TRUE;                    // 7th, 8th, 9th bits are ON
    }

    else
    {
        return FALSE;                   // any one or more bits are OFF
    }
}