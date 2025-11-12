//write a program which accepts total marks and obtained marks from user and calculate percentage 

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   To calculate percentage 
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar
//  Date :          23/10/2025
//
/////////////////////////////////////////////////////////////

float Percentage(int iTotalM, int iObtained)
{
    if(iTotalM == 0)                        //If total marks is 0,we can't calculate percentage
    {
        return -1.0f;
    }

    if(iObtained == 0)                      //Obtained marks is 0,percentage 0
    {
        return 0.0f;
    }
    
    return ((float)iObtained / (float)iTotalM) * 100.0f;   
     
}//End of Percentage

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks : \n");
    scanf("%d",&iValue1);

    printf("\nEnter Obtained Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);                 //Function call

    if(fRet == -1.0f)
    { 
        printf("Error : Total marks cannot be zero");
    }
    else
    {
    printf("\nPercentage is : %f%%",fRet);
    }

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input1 : 500   Input2 : 400    Output : 80.000000%
//  Input1 : 600   Input2 : 0      Output : 0.000000%
//  Input1 : 0     Input2 : 200    Output : Error : Total marks cannot be zero
//  Input1 : 450   Input2 : 400    Output : -20.000000%
//
/////////////////////////////////////////////////////////////