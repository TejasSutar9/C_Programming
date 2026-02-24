#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F;   // first 4 bits mask

        iNo = iNo | iMask;     // ON first 4 bits

    return iNo;
}

int main()
{
    UINT iNo = 0;      
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iNo);

    iRet = OnBit(iNo); // function call

    printf("Modified number: %u", iRet);

    return 0;
}
