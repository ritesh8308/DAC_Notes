// pass by value and address
// swap the values 

#include<stdio.h>
void swap_by_address(int *ptr1,int *ptr2);
void swap(int n1, int n2);

int main()
{
    int num1 = 25, num2 = 50;
    printf("num1 = %d num2 = %d\n",num1,num2);
    swap(num1,num2);
    printf("Pass by value :\n");
    printf("num1 = %d num2 = %d\n",num1,num2);

    swap_by_address(&num1,&num2);
    printf("\nPass by address :\n");
    printf("num1 = %d num2 = %d\n",num1,num2);
    return 0;
}


void swap_by_address(int *ptr1,int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2; 
    *ptr2 = temp;
}



void swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2; 
    n2 = temp;
}