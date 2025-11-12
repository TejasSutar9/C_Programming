// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   if number is less than 10 then print "Hello" otherwise print "Demo"
//  Input :         int
//  Output :        int
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)                            
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}//End of Display

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);                        //Function call

    return 0;
}//End of main

////////////////////////////////////////////////////////////////////
//
//  Test cases are successfully handeled by application
//  input1 : 5                 output : Hello
//  input1 : 12                output : Demo
//  input1 : 3                 output : Hello
//  input1 : 21                output : Demo
//
////////////////////////////////////////////////////////////////////