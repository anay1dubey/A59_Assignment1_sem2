#include <stdio.h>
int main()
{
    int n[10]={};
    int i,p=0,ne=0,z=0,s=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(n[i]>0)
        {
            p++;
        }
        else if(n[i]<0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    printf("+ve: %d, -ve: %d, zero: %d",p,ne,z);
}
