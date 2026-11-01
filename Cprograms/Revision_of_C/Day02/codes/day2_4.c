// do-while loop : Exit controlled Loop
// Loop body is executed atleast once irrespective of the condition

#include<stdio.h>

int main()
{

    int num = 3;

    do
    {
        printf("num = %d\n",num);// 3
        num = num + 1; // 4
    }while(num > 5); // 4 > 5 --> false
    return 0;
}

/*
int num = 3;

while(num > 5)
{
    printf("num = %d\n",num);
    num = num + 1;
    
}

*/