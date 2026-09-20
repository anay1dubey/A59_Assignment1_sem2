#include <stdio.h>
int main()
{
    int arr[10]={2,16,4,6,1,11,2,8,17,12};
    int n,c=0;
    printf("Enter a number to search: ");
    scanf("%d",&n);
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            printf("found at index: %d \n",i);
            c++;
        }
    }
    if(c==0)
    {
        printf("Not found");
    }
}