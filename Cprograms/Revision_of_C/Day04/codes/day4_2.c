// Dynamic Memory Allocation
// Malloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1 = 10; // compile time
    int arr[3][2]; // 24 bytes at compile time

   int *ptr =(int*) malloc(sizeof(int));
   *ptr = 25;
   printf("value = %d\n",*ptr); // 25


   int *ptr2 = (int*)malloc(sizeof(int)*5);
   ptr2[0] = 10;
   ptr2[1] = 20;
   ptr2[2] = 30;

   printf("elements :\n");
   for(int i =0; i<5; i++)
   {
    printf("%d  ",ptr2[i]);
   }

   free(ptr); // free(500) --> to avoid memory leakage
   ptr = NULL ; // to avoid dangling pointer

   free(ptr2);
   ptr2 = NULL;
    return 0;
}