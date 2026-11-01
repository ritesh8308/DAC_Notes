// pointers

#include<stdio.h>

int main()
{
    int num1 = 25;
    int *ptr = &num1;
    // ptr is an int pointer variable holding the address of num1.
    
    printf("num1 = %d\n",num1); // 25
    printf("Address of num1 = %u\n",&num1); // 100 (assumed address as per diagram)
    printf("ptr = %u\n",ptr); // 100
    printf("Address of ptr = %u\n",&ptr); // 500 (assumed address as per diagram)
    printf("*ptr = %d\n",*ptr);// *100 --> 25
    return 0;
}