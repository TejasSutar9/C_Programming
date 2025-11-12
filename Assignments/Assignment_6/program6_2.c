//write a program which accepts one number from user and check whether that number is greater than 100 or not

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output
#include<stdbool.h>                     //For Boolean datatype

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckGreater
//  Description :   To check whether that number is greater than 100 or not
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar
//  Date :          23/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}//End of CheckGreater

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);            //Function call

    if(bRet == true)
    {
        printf("Greater than 100\n");
    }
    else 
    {
        printf("Smaller than 100\n");
    }

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 121       Output : Greater than 100
//  Input : 90        Output : Smaller than 100
//
/////////////////////////////////////////////////////////////