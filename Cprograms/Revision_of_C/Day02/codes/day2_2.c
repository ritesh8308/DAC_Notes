// for loop :
/*
 loop variable initialization
 condition check
 loop body execution
 loop variable modification
*/

/*
syntax :
for(loop var init; condition chk; loop var modification)
{
    loop body
}

for(step 1; step 2; step 4)
{
    step 3
}
step 1 is executed only once

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value for num to print its table :");
    scanf("%d",&num);

    for(int i = 1; i <= 10; i = i+1)
    {
        printf("%d * %d = %d\n",num, i, num*i);
    }
// steps 2, 3 and 4 continue to execute till the condition is true.


// example 2 :
// reverse a number : 
// eg : 1234 --> 4321
    int n1,reverse = 0;

    printf("\n\n");
    printf("Enter the number to reverse :");
    scanf("%d",&n1);

    int org = n1;

    for( ;n1 > 0; n1 = n1/10)
    {
        int digit = n1 % 10;
        reverse = reverse * 10 + digit;
    }
    printf("Original num = %d   Reverse num = %d\n",org, reverse);
    return 0;
}