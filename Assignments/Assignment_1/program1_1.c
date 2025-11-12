// program to divide two numbers.

///////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Description :   To perform dividation of two number
//  Input :         int,int
//  Output :        int
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
///////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;                           //To store result

    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;                     //Business logic

    return iAns;
}//End of Divide

///////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////

int main()
{

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    
    iRet = Divide(iValue1,iValue2);         //Function Call

    printf("Division is : %d",iRet);

    return 0;
}   //End of main

///////////////////////////////////////////////////////
//
//  Test case is successfully handelled by application
//  input1:15       input2:5        output:3
//
///////////////////////////////////////////////////////