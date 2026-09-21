#include <stdio.h>
int main()
{
    int m[3][3];
    int i,j,min_i=0,min_j=0,max_i=0,max_j=0;
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
        for(j=0;j<3;j++)
        {
            if(m[min_i][min_j]>m[i][j])
            {
                min_i=i;
                min_j=j;
            }
        }
    }
    printf("min element: %d \n",m[min_i][min_j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[max_i][max_j]<m[i][j])
            {
                max_i=i;
                max_j=j;
            }
        }
    }
    printf("min element: %d \n",m[max_i][max_j]);
}
