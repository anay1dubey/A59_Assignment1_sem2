#include <stdio.h>
int main()
{
    int n[5]={2,1,7,5,4};
    int l=sizeof(n)/sizeof(n[0]);
    int i,j,temp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d,",n[i]);
    }
}
