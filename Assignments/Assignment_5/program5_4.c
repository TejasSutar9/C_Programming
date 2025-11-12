
/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   To check number is positive,negative or zero
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number");
    }
    else if(iNo == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative Number");
    }
}//End of CheckNumberType

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iNum = 0;
    printf("Enter number : ");
    scanf("%d",&iNum);

    CheckNumberType(iNum);                      //Function Call

    return 0;

}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : Positive Number
//  Input : -33      Output : Negative Number
//  Input : 0        Output : Zero
//
/////////////////////////////////////////////////////////////