// switch - case
// calculator

#include<stdio.h>

int main()
{
    int choice, n1, n2;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    
    printf("Enter your choice :");
    scanf("%d",&choice);

    printf("Enter the values for n1 and n2 :");
    scanf("%d%d",&n1,&n2);

    switch(choice)
    {
        case 1 :
                printf("Addition = %d\n",n1 + n2);
                //
                //
                //
                //
                break;
        case 2:
                printf("Subtraction = %d\n",n1 - n2);
                break;
        case 3:
                printf("Multiplication = %d\n",n1 * n2);
                break;
        case 4:
                printf("Division = %d\n",n1 / n2);
                break;
        default :
                printf("Invalid Choice.\n");

        
    }
    return 0;
}

/*

switch(choice)
    {
        case '+' :
                printf("Addition = %d\n",n1 + n2);
                break;
        case '-':
                printf("Subtraction = %d\n",n1 - n2);
                break;
        case '*' :
                printf("Multiplication = %d\n",n1 * n2);
                break;
        case '/' :
                printf("Division = %d\n",n1 / n2);
                break;
        default :
                printf("Invalid Choice.\n");

        
    }



*/