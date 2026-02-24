#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iResult = iNo1 & iNo2;
    int iPos = 1; 

    while(iResult != 0)
    {
        if(iResult & 1)
        {
            printf("%d\n",iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : \n");
    scanf("%u",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%u",&iValue2);

    printf("Positions of common ON bits are : \n");
    CommonBits(iValue1, iValue2);

    return 0;
}