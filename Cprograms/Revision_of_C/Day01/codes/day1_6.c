// conditional Statements :
// if-else :  check if the character is vowel or consonant.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the char to check if its a vowel or not :");
    scanf("%c",&ch); // I

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' 
    || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') // if(0)
    {
        printf("The char entered is a vowel !\n");
    }
    else
    {
        printf("The char entered is a consonant !\n");
    }
    return 0;
}