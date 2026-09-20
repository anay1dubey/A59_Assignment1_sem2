#include <stdio.h>
int main()
{
    int m[3][3];
    int n[3][3];
    int f[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for matrix 1: ");
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for matrix 2: ");
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            f[i][j]=0;
            for(k=0;k<3;k++)
            {
                f[i][j]+=m[i][k]*n[k][j];
            }
        }
    }
    printf("Final matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }
}