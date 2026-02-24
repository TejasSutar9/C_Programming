typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;            // mask for 15th bit

    if((iNo & iMask) == iMask)
    {
        return TRUE;                    // 15th bit is ON
    }

    else
    {
        return FALSE;                   // 15th bit is OFF
    }
}