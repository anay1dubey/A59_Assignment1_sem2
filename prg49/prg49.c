#include <stdio.h>
int main()
{
    int l[5]={3,9,6,4,5};
    int n=sizeof(l)/sizeof(l[0]);
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(l[j]<l[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=l[i];
            l[i]=l[min];
            l[min]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d,",l[i]);
    }
}
