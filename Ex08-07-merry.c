/*
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
    printf("   ★\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++)
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
        printf("\n");
    }

    printf("  | |\n");
    printf("  | |  Merry Christmas ~*");

    return 0;
}
