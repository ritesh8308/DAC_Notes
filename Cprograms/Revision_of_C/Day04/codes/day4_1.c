// 2-D arrays

#include<stdio.h>

int main()
{
    int arr[3][3] = {11,12,13,14,15,16,17,18,19};

    printf("arr[1][2] = %d\n",arr[1][2]); // 16

    int arr2[3][2] = {10,20,30,40}; // partial initilization
    /*
        10   20
        30   40
        0    0
    
    */

   int arr3[3][3] = {{10,15},{20},{30,40}};
   /*
            10   15   0
            20   0    0
            30   35   40
   */
  arr3[2][1] = 0;

    int arr4[][2] = {11, 22,33,44,55};
    /*
            11   22
            33   44
            55    0
    
    */

   // int arr[3][3] = {11,12,13,14,15,16,17,18,19};

    for(int i =0; i<3; i++) // rows
    {
        for(int j =0; j<3; j++) // cols
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}