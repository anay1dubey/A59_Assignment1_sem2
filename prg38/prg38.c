#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=0;j<(5-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
