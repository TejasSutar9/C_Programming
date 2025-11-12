//Check Even or Odd

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Check Even or Odd
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if(iNo < 0)                             //updater
    {
        iNo = -iNo;
    }
    if(iNo % 2 == 0)
    {
        printf("%d is Even Number",iNo);
    }
    else
    {
        printf("%d is Odd Number",iNo);
    }
}//End of CheckEvenOdd

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iNumber;

    printf("Enter number : ");
    scanf("%d",&iNumber);

    CheckEvenOdd(iNumber);              //Function Call

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : 12 is Even Number
//  Input : 13       Output : 13 is Odd Number
//  Input : 19       Output : 19 is Odd Number
//  Input : 44       Output : 44 is Even Number
//
/////////////////////////////////////////////////////////////