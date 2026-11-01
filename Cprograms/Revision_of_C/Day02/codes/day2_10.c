// auto, register, global variables 
#include<stdio.h>

int num1; // global variable 
extern int test; // global variable declaration
int main()
{
    int num1 = 10; // local variable as known as auto variables
    int n1; // declaration : default value : garbage
    printf("num1 = %d\n",num1); // 10 : preference is given to the local variable
   
    register int var;
    /*
        with the register keyword, we are requesting the compiler to store the var
        variable in the CPU registers rather than the stack section for faster accessibiltiy
        of that variable.
        If the reqest is not accespted, the variable will be stored in the stack section
        like other local variables.
    */
   printf("test = %d\n",test);
    return 0;
}

int test = 25; // global variable 

void addition()
{
    int result = 123 + 456; // result is local variable
    printf("num1 = %d\n",num1);  // global num1 is used : 0

}

/*
auto / local variable :
storage : stack section
default value : garbage
scope / accessibility : block
life : block

_______________________________________________
register variables : 
storage : CPU registers (if the request is accepted)
otherwise stack section
default value : garbage
scope : block
life : block
__________________________________________
global variables :
storage : data section
default value : 0
scope : program
life : program


*/