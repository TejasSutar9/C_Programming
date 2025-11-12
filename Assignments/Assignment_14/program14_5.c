//5
#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if (iDigit < 6)     // Check if digit is less than 6
        {
            iFrequency++;     
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

    iRet = Count(iValue);

    printf("%d",iRet);    

    return 0;
}