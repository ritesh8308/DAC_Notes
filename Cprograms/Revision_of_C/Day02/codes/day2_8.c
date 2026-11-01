// Functions : with parameters, with return type

#include<stdio.h>

int addition(int n1,int n2, int n3); // function declaration
int main()
{
    // function call
     int output = addition(547,345,789); // actual parameters
     printf("Output of addition = %d\n",output);
       
       
     output = addition(1223,5566,881122);
     printf("Output of addition = %d\n",output);

    return 0;
}

// function definition
// return_type function_name(input parameters)
int addition(int n1,int n2, int n3) // formal parameters 
{
    int result = n1 + n2 + n3;
    return result;
}

/*

void addition(int n1,int n2, int n3)
{
    int result = n1 + n2 + n3;
    printf("result = %d\n",result);
}


*/