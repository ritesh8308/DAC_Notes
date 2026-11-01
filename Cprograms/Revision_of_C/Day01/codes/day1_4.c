// relational Ops : < , <=, > , >= , !=, ==
// return 0(false) or 1(true)

#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the values for n1 and n2 :");
    scanf("%d%d",&n1,&n2); // 45 20
    int result = n1 < n2; // 45 < 20 --> 0

    printf("result = %d\n",result); // 0
    printf("n1 > n2 = %d\n",n1 > n2);  // 1
    printf("n1 <= n2 = %d\n",n1 <= n2);  // 0
    printf("n1 >= n2 = %d\n",n1 >= n2); // 1
    printf("n1 != n2 = %d\n",n1 != n2); // 1
    // output : n1 != n2 = 1
 
    printf("n1 == n2 = %d\n",n1 == n2); // 0

    return 0;
}

/*

 = is the assignment operator. 
 Used to assign the right hand value to the left hand variable.

 == is the relational operator. 
 Used to check for exact match between the two operands.
 operand1 == operand2
 it returns 0 or 1

*/