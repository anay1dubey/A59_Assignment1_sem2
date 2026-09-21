#include <stdio.h>
int main()
{
    int n1[10]={};
    int n2[10]={};
    int n3[20]={};
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Enter element of array 1: ");
        scanf("%d",&n1[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("Enter element of array 2: ");
        scanf("%d",&n2[i]);
    }
    for(i=0;i<=9;i++)
    {
        n3[i]=n1[i];
    }
    for(i=10;i<=19;i++)
    {
        n3[i]=n2[i-10];
    }
    printf("New array: {%d",n3[0]);
    for(i=1;i<=19;i++)
    {
        printf(",%d",n3[i]);
    }
    printf("}");
}
