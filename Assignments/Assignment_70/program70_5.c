#include<stdio.h>

// best approach
int Mult(int iNo)
{
    if(iNo == 0)          // base case
    {
        return 1;
    }

    return (iNo % 10) * Mult(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Multiplication of digits is : %d", iRet);

    return 0;
}



/*

#Alternate method#(As I followed while learning)
Works for understanding concept, 
optimal solution should return value while unwinding recursion.

int Mult(int iNo)
{
    static int iMul = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        Mult(iNo / 10);
    }
    return iMul;
}

*/