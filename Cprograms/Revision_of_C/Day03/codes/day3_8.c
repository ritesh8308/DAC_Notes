// string functions : 
// strlen ,strcpy,strcmp, strchr, strstr, strrev, strcat, strupr, strlwr

#include<stdio.h>
#include<string.h>

int main()
{   
    char str1[] = "Sunbeam Info"; // string
    // S u n b e a m   I n f o \0  
    char str2[50];
    printf("string length str1 = %d\n",strlen(str1)); // 12
    // sizeof(str1) --> no. of bytes allocated for the str1 

    strcpy(str2,str1);
    printf("str2 = %s\n",str2); // Sunbeam Info

    int res = strcmp(str1,str2); // returns 0 or 1 or -1
    // returns 0 if both the strings are exactly matching
    // returns 1 if string 1 is greater than string 2
    // else returns -1
    if( res == 0)
        printf("Strings are equal !\n");
    else if(res == 1)
        printf("String 1 is bigger.\n");
    else
        printf("String 2 is bigger.\n");


     char *ptr = strchr(str1,'I');
     if (ptr == NULL)
        printf("char not found.\n");
    else
        printf("char I is found at index = %d\n",ptr - str1); // 108 - 100 = 8


   char *ptr2 = strstr(str1,"beam");
   if(ptr2 == NULL)
        printf("string not found.\n");
   else
        printf("string found at index = %d\n",ptr2-str1); // 103 - 100 = 3

    printf("string reverse = %s\n",strrev(str1));
    strcat(str2,str1);
    // concatanated string is stored in 1st parameter string

    printf("string 2 = %s\n",str2);
    printf("str1 in uppercase = %s\n",strupr(str1));

    return 0;
}