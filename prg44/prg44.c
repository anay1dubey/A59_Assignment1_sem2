#include <stdio.h>
int main()
{
    int n[10]={};
    int i,odd=0,even=0,s=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(n[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("odd: %d, even: %d",odd,even);
}
