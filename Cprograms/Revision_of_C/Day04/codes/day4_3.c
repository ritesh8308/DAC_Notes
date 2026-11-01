// calloc , realloc

#include<stdio.h>
#include<stdlib.h>

int main()
{

     int *ptr =(int*) calloc(sizeof(int),5);
    // malloc (sizeof(int)*5)
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    for(int i =0; i<5; i++)
    {
        printf("%d  ",ptr[i]);
    }


    printf("\n Realloc :\n");
    ptr = realloc(ptr,sizeof(int) * 7);
    ptr[5] = 80;
    ptr[6] = 90;
    for(int i =0; i<7; i++)
    {
        printf("%d  ",ptr[i]);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}