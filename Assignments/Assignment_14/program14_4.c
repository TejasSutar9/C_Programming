//4
#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if (iDigit == 4)     // Check if digit is 4
        {
            iFrequency++;     // 4 found => increment
        }

         iNo = iNo / 10;
    }
    return iFrequency;
}

//Time Complexity : O(log N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);    

    return 0;
}