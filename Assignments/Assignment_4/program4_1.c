//Write a program which accept number from user and display its multiplication of factors

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                   //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : MultiFact
//  Description :   To display its multiplication of factors
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////
int MultiFact(int iNo)
{
    int iCnt = 0, iMulti = 1;
    printf("Factors is : \n");
    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            printf("%d\n",iCnt);
            iMulti = iMulti * iCnt;
        } 
    }
    
    return iMulti;
}//End of MultiFact

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);           //Function Call

    printf("Multiplication of factors is : %d",iRet);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : 144
//  Input : 13       Output : 1
//  Input : 10       Output : 10
//
/////////////////////////////////////////////////////////////