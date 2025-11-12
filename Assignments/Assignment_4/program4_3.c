//Write a program which accept number from user and display all its non factors.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description :   To display all its non factors
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;
    printf("Non Factors is : \n");
    
    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt != 0))
        {
            printf("%d\t",iCnt);
        } 
    }
}//End of NonFact

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);                //Function Call

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : 5  7  8  9  10  11 
//  Input : 13       Output : 2  3  4  5  6  7  8  9  10  11  12
//  Input : 10       Output : 3  4  5  6  7  8  9
//
/////////////////////////////////////////////////////////////