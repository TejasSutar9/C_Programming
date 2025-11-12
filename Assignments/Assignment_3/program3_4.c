//Accept one character from user and convert case of that charater.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////
#include<stdio.h>               //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used to accept one character from user and convert case of that charater
//  Input :         character
//  Output :        Character
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if(CValue == 'a')
    {
        printf("A");
    }
    else if(CValue == 'D')
    {
        printf("d");
    }
}//End of DisplayConvert

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);             //Function Call

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : a       Output : A
//  Input : D       Output : d
//
/////////////////////////////////////////////////////////////