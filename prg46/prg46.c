#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter how many elements you want to add: ");
    scanf("%d",&n);
    int numlist[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&numlist[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(numlist[j]>numlist[j+1])
            {
                temp=numlist[j+1];
                numlist[j+1]=numlist[j];
                numlist[j]=temp;
            }
        }
    }
    printf("max element is: %d \n",numlist[n-1]);
    printf("second max element is: %d",numlist[n-2]);
}
