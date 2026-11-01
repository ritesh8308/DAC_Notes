// Loops : 
/*
Entry Controlled Loop :
1) while loop
2) for loop

Exit Controlled Loop :
1) do-while loop

4 important steps :
1) loop variable initialization
2) loop condition checking
3) loop body execution
4) loop variable modification

*/

// while loop : Entry controlled loop
// print the table of a number specified by the user.
/*
eg : table of 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15

*/
#include<stdio.h>

int main()
{

    int num;
    printf("Enter the value for num to print its table :");
    scanf("%d",&num);

    int i = 1; // 1. loop variable initalization

    while(i <= 10) // 2. condition checking
    {
        //3. loop body
        // 5 * 1 = 5
        // 5 * 2 = 10
    
        printf("%d * %d = %d\n",num,i, num*i);

        i = i+1; // 4. loop variable modification
   
    }

    return 0;
}

