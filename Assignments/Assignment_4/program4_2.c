//2. Write a program which accept number from user and display its factors in decreasing order.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   To display its factors in decreasing order
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0, iMulti = 1;
    printf("Factors is : \n");
    
    for(iCnt = (iNo-1); iCnt >= 1 ;iCnt--)
    {
        if((iNo % iCnt == 0))
        {
            printf("%d\t",iCnt);
        } 
    }
}//End of MultiFact

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

    FactRev(iValue);                  //Function Call

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : 6  4  3  2  1 
//  Input : 13       Output : 1
//  Input : 10       Output : 5  2  1
//
/////////////////////////////////////////////////////////////