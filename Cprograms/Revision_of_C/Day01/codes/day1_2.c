// Datatypes : int, char, float, double
#include<stdio.h>

int main()
{
    int num1; // vairbale declaration
    num1 = 25; // variable assignment

    char ch = 'N'; // variable initialization

    float fnum = 1.2;
    double dvar = 5.2;

    printf("The value for num1 is %d \n",num1);
    // output : The value for num1 is 25
    // %d is the format specifier for printing the value in int format

    printf("The value for ch is %c\n",ch);
    // %c is the format specifier to print the value in char format

    printf("The ASCII value for ch is %d\n",ch);

    printf("The value for fnum is %.2f\n",fnum);

    printf("The value for dvar is %.3lf\n",dvar);
    // lf is the format specifer for double
    // long float
}