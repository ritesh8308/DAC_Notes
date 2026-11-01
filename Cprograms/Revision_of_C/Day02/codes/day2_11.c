 // static variables

 #include<stdio.h>

void fun();
 void fun2();

static int n1;  // static variable
int n2; // global variable 

 int main()
 {

    printf("Local variable :\n");
    fun();
    fun();
    fun();
    printf("\n static variable :\n");
    fun2();
    fun2();
    fun2();

    return 0;
 }

 void fun()
 {
    int num1 = 10;
    printf("num = %d\n",num1); // 10  10  10
    
    num1 = num1 + 2; // 12 12 12
 }

 void fun2()
 {
    static int num1 = 10;
    printf("num = %d\n",num1); // 10  12  14
    num1 = num1 + 2; 
 }

 void fun3()
 {
     // printf("num = %d\n",num1); 
 }

 /*
 static variable :
 storage : data section
 default value : 0
 scope : limited
 life : program
 
 */