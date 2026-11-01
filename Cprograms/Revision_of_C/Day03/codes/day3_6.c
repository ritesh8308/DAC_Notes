// arrays in function

#include<stdio.h>
void accept_data(int arr[5]);
void print_data(int arr[5]);

int main()
{
    int arr[5];
    accept_data(arr); // 100 base address is passed
    print_data(arr);
    // arrays are by default pass by address
    printf("size of arr = %d\n",sizeof(arr));
    return 0;
}

void accept_data(int arr[5])
{
    printf("Enter the values for the array :");

    for(int i =0; i < 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print_data(int arr[5])
{
    printf("The values are :\n");

    for(int i =0; i< 5; i++)
    {
        printf("%d  ",arr[i]);
    }
}