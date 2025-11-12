//Accept one number and check whether it is divisible by 5 or not

///////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name : check
//  Description :   To check number which is divisible by 5 or not
//  Input :         int
//  Output :        int
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
///////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)                              
    {
        return true;
    }
    else
    {
        return false;
    }
}//End of check

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;                              //To store result

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);                           //Method call

    if(bRet == true)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }

    return 0;
}//End of main

///////////////////////////////////////////////////////
//
//  Test case is successfully handelled by application
//  input1:15       input2:5        output:It is divisible by 5
//  input1:22       input2:5        output:It is not divisible by 5
//
///////////////////////////////////////////////////////