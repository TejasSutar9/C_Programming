#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0f;

    Area = PI * fRadius * fRadius;

    return Area;
}

//Time Complexity : O(N)

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f",dRet);

    return 0;
}