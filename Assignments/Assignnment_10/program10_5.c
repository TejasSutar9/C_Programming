#include<stdio.h>

double SquareMeter(float fTemp)
{
    float fSqMeter = 0.0f;

    fSqMeter = fTemp * 0.0929f;

    return fSqMeter;
}

//Time Complexity : O(N)

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Square Meter is : %f",dRet);

    return 0;
}