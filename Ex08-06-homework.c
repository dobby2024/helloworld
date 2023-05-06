/*
파일명 : Ex08-06-homework.c
            i    j
   *        0    4이상 공백
  ***       1    5이상 공백 
 *****      2    6이상 공백
*******
 *****
  ***
   *


    ★
	*
   ***
  *****
 *******
   | |
   | |  Merry Christmas ~*


*/
#include <stdio.h>

int main(void) {
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(i < 7 / 2 + 1) 
            {
                if (i+j < 3)
                {
                    printf(" ");
                }
                else if (j-i > 3)
                {
                    printf(" ");
                }
                else 
                {
                    printf("*");
                }
            }
            else 
            {
                if(i - j > 3)
                {
                    printf(" ");
                } 
                else if (i + j > 9)
                {
                    printf(" ");
                }
                else 
                {
                    printf("*");                
                }
            }
        }

        printf("\n");
    }



    return 0;
}











