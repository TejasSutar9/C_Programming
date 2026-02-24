#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT first = 0, last = 0, result = 0;

    last  = iNo & 0x0F;   // extract last nibble
    first = iNo & 0xF0;   // extract first nibble

    result = (last << 4) | (first >> 4); // swap

    return result;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%u",&iValue);

    iRet = ToggleNibble(iValue);

    printf("Modified Number is : %u\n",iRet);

    return 0;
}