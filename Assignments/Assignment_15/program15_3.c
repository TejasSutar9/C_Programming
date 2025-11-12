//3
#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if(iDigit > 3 && iDigit < 7)   // Check digits between 3 and 7
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

    iRet = CountRange(iValue);

    printf("%d",iRet);    

    return 0;
}