#include <stdio.h>
int main()
{
    int m[3][3];
    int i,j,s;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element: ");
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        s=0;
        for(j=0;j<3;j++)
        {
            s+=m[i][j];
        }
        printf("Sum of elements in row %d is %d \n",i,s);
    }
}