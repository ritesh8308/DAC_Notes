// jump statements : 
// break  : used in switch case and in loops

#include<stdio.h>

int main()
{
    for(int i = 1; i<=3; i = i+1)
    {
        for(int j = 1; j<= 4; j = j+1)
        {
            printf("%d  %d", i,j);

            if( i == 2 && j == 3)
                break;
        }
        printf("\n");
    }

    return 0;
}