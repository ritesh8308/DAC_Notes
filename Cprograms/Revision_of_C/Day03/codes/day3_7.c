// char arrays

#include<stdio.h>

int main()
{
    char str1[5] = {'A','B','C','D','E'};  // char array --> a  b  c  d  e
    char str2[5] = {'A','B','C','D','\0'}; // string --> abcd

    char str3[7] = {'s','u','n','b','e','a','m'}; // char array
    char str4[10] = {'s','u','n','b','e','a','m'}; // partial initialization --> string
    // s u n b e a m 0 0 0

    char str5[4] = "pune"; // char array -->pune
    char str6[5] = "pune"; // string --> pune\0

    // char str7[]; error
    char str7[] = "Sunbeam Info";  // string
    // Sunbeam Info\0

    char str8[] = {'s','u','n'}; // char array

    printf("string = %s\n",str6); 
    printf("char array str5 = %s\n",str5); // punesadasdsf\0

    printf("char array in a loop :\n");
    for(int i =0; i<4; i++)
    {
        printf("%c",str5[i]);
    }
    return 0;
}