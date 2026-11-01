// size of a pointer
#include<stdio.h>

int main()
{
    int num1 = 25;
    char ch = 'Z';
    float fvar = 1.2;
    double dnum = 5.7;

    int *ptr = &num1;
    char *cptr = &ch;
    float *fptr = &fvar;
    double *dptr = &dnum;


    printf("size of num1 = %d\n",sizeof(num1)); // 4
    printf("size of ch = %d\n",sizeof(ch)); // 1
    printf("size of fvar = %d\n",sizeof(fvar)); // 4
    printf("size of dnum = %d\n",sizeof(dnum)); // 8

    printf("size of ptr = %d\n",sizeof(ptr)); // 8 
    printf("size of cptr = %d\n",sizeof(cptr)); // 8
    printf("size of fptr = %d\n",sizeof(fptr)); // 8
    printf("size of dptr = %d\n",sizeof(dptr)); // 8

    return 0;
}

/*
The size of a pointer is fixed irrespective of its datatype.
The size is 4 bytes on the 32 bit compiler and 8 bytes on the 64 bit compiler.

*/