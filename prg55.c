#include <stdio.h>
int main()
{
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    int i,j,temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for matrix 1: ");
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for matrix 2: ");
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("matrix 3: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
}
