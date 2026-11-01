// Logical Ops : && || !

/*
Logical ops also return 0(false) or 1(true)

&& : returns true(1),only if both the operands are true.
If the first operand of && is false, it does not check the second operand.
It returns false.
op1 && op2
(false)  && not check

|| : returns true, if either one of the operand is true.
If the first operand of || is true, it does not check the second operand.
It returns true.
op1 || op2
(true)  || not check

! : returns true if the operand is false and vice versa.
!op1 
!true --> false
!false --> True

*/

#include<stdio.h>

int main()
{

int n1 = 45,n2 = 50 ,n3 = 20;

 int result = n1 < n2 && n2 > n3;
 //              op1   &&  op2
 //           45 < 50 (1)  && 50 > 20 (1)
 //                  1 && 1
// result = 1
printf("Result of logical && = %d\n",result);

result = n2 < n1 && n2 > n3;
//          op1  && op2 
//       50 < 45 (0)  && not checked
// result = 0
printf("Result of logical && = %d\n",result);

result = n1 > n3  ||  n1 > n2;
//        op1  || op2
//      45  > 20 (1)  || not checked
// result = 1
printf("Result of logical || = %d\n",result);

result = n2 < n1 || n3 < n2;
//       50 < 45 (0) || 20 < 50(1)
// result = 1
printf("Result of logical || = %d\n",result);

result = !n1;
//       !45 --> !True 
// Any non zero number is considered as true
// result = 0

int n4 = 0;

result = !n4;
//        !0 --> !False --> True
// result = 1

    return 0;
}