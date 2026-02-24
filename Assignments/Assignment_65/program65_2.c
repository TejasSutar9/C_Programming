#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240;   // 7th and 10th bit mask

    if ((iNo & iMask) != 0)
    {
        iNo = iNo ^ iMask;    // OFF 7th and 10th bits
    }

    return iNo;
}

int main()
{
    UINT iNo = 0;      
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iNo);

    iRet = OffBit(iNo); // function call

    printf("Modified number: %u", iRet);

    return 0;
}
