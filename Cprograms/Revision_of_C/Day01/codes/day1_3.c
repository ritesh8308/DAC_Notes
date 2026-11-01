/*
scanf
 Operators : Arithmetic : + - * 
/(Quotient of division) 
%(mod : remainder of division)
*/
#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    // & --> address of operator

    int result = num1 + num2;
    // 25 + 10
    // result = 35
    printf("result of addition = %d\n",result);
   // int res = num1 - num2; 
   result = num1 - num2;
    printf("Subtraction = %d\n",num1 - num2 /10 * 20 +45);
    printf("Multiplication = %d\n",num1 * num2);
    printf("Quotient of Division = %d\n",num1 / num2);
    printf("Remainder of division = %d\n",num1 % num2);
    return 0;
}

/*
function(p1,p2,p3)
// output --> p1 , p2 , p3



*/