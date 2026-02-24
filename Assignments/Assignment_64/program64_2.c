typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;            // 5th bit + 18th bit mask

    if((iNo & iMask) == iMask)
    {
        return TRUE;                    // 5th and 18th bits are ON
    }

    else
    {
        return FALSE;                   // 5th and 18th bits are OFF
    }
}