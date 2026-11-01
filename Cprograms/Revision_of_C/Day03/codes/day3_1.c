// recursion
// factorial : 5! = 5*4*3*2*1

#include<stdio.h>

int my_fact(int n1);

int main()
{
    int num1 = 5;
    int result = my_fact(num1);
    printf("result = %d\n",result);

    return 0;
}

int my_fact(int n1)
{
    if(n1 == 0)
        return 1;

    return n1 * my_fact(n1-1);
}