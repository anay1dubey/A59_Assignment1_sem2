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
    for(i=0;i<=9;i++)
    {
        n1[i]=n2[i];
    }
    for(i=0;i<=9;i++)
    {
        n2[i]=n3[i];
    }
    printf("New array 1\n");
    for(i=0;i<=9;i++)
    {
        printf("%d,",n1[i]);
    }
    printf("\nNew array 2\n");
    for(i=0;i<=9;i++)
    {
        printf("%d,",n2[i]);
    }
}