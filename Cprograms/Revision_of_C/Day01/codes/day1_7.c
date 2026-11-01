// if-else if
/* calculator:
Accept 2 numbers and the operator from the user and perform the operation
as per the user requirement.
*/

#include<stdio.h>

int main()
{

    char op;
    int n1,n2;
    printf("Enter the operator :");
    scanf("%c",&op);

    printf("Enter the values for n1 and n2 :");
    scanf("%d%d",&n1,&n2);

    if(op == '+')
    {
        printf("Addition = %d\n", n1 + n2);
    }
    else if(op == '-')
    {
        printf("Subtraction = %d\n", n1 - n2);
    }
    else if(op == '*')
    {
        printf("Multiplication = %d\n", n1 * n2);
    }
    else if(op == '/')
    {
        if(n2 == 0)
            printf("Division by 0 is not allowed.\n");
        else
            printf("Division = %d\n", n1 / n2);
    }
    else
        printf("Invalid Operator.\n");
    return 0;
}