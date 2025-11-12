#include<stdio.h>

int KiloMeter(int iNo)
{
    int KMValue = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 0)
    {
        KMValue = iNo * 1000;
    }

    return KMValue;
}

//Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&iValue);

    iRet = KiloMeter(iValue);

    printf("Meter : %d",iRet);

    return 0;
}