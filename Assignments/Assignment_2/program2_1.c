//Accept one number user and print that number of * on screen

////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   To print number of * on screen
//  Input :         int
//  Output :        int
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;                   //To store result

    //Write upater

    if(iNo < 0)                     //updater
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}//End of Display

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;                 //input

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);                //Function call

    return 0;
}//End of main

////////////////////////////////////////////////////////////////////
//
//  Test cases are successfully handeled by application
//  input1 : 5                 output : *****
//  input1 : -7                output : *******
//  input1 : 2                 output : **
//  input1 : -4                output : ****
//
////////////////////////////////////////////////////////////////////