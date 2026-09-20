#include <stdio.h>
int main()
{
    int n[10]={};
    int i,s=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        s+=n[i];
    }
    printf("Sum=%d",s);
}