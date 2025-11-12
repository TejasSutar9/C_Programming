//Accept one number from user and check whether it is even or not.

////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description :   To check even or odd
//  Input :         int
//  Output :        bool
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////
bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}//End of CheckEven

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);                   //Function call

    if(bRet == true)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");

    }
    return 0;
}//End of main

////////////////////////////////////////////////////////////////////
//
//  Test cases are successfully handeled by application
//  input1 : 10                 output : It is even number
//  input1 : 7                  output : It is odd number
//  input1 : -2                 output : It is even number
//  input1 : -9                 output : It is odd number
//
////////////////////////////////////////////////////////////////////