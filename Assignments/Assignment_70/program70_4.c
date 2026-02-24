#include<stdio.h>

// best approach
int Fact(int iNo)               
{
    if(iNo == 0 || iNo == 1)   // base case
    {
        return 1;
    }
    return iNo * Fact(iNo - 1);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}

/*
#Alternate method#(As I followed while learning)
Works for understanding concept, 
optimal solution should return value while unwinding recursion.

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}


*/