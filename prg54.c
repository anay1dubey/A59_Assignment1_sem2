#include <stdio.h>
int main()
{
    int m[3][3];
    int t[3][3];
    int i,j,temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element: ");
            scanf("%d",&m[i][j]);
        }
    }
    printf("before\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i]=m[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=t[i][j];
        }
    }
    printf("after\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
}
