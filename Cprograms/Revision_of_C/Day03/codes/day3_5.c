// Arrays : declaration and printing
// It is a collection of similar data elements stored at consecutive memory location.

#include<stdio.h>

int main()
{
    int arr1[5]; // array declaration

    arr1[0] = 11; // assignment
    arr1[1] = 20;
    arr1[2] = 25;

    int arr2[5] = {10,20,30,40,50}; // array initialization

    printf("arr1[2] = %d\n",arr1[2]); // 25
    printf("arr1[4] = %d\n",arr1[4]); // garbage
    printf("arr2[3] = %d\n",arr2[3]); // 40


    // int arr3[]; error

    int arr3[] = {11,22,33}; // 12 bytes of memory is allocated

    int arr4[5] = {12,14,16}; // partial initialization
    // in partial initialization remaining values are initialized to 0

    for(int i =0; i < 5; i++)
    {
        // int arr2[5] = {10,20,30,40,50}; 
        printf("%d  ",arr2[i]);
    }

    return 0;
}