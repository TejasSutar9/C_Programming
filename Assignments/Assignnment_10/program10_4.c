#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = (fTemp - 32) * (5.0f/9.0f); 
    
    return fCelsius;
}

//Time Complexity : O(N)

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsuis : %f",dRet);

    return 0;
}