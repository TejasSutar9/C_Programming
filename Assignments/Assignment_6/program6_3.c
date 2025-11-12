//write a program which accepts two numbers and check whether number is equal or not.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output
#include<stdbool.h>                         //For Boolean datatype

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Description :   To check whether number is equal or not
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar
//  Date :          23/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}//End of CheckEqual

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////


int main()
{

    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter two Numbers : \n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1,iValue2);             //Function call

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else 
    {
        printf("Not Equal\n");
    }

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input1 : 11    Input1 : 11   Output : Equal
//  Input1 : 15    Input1 : 11   Output : Not Equal
//
/////////////////////////////////////////////////////////////