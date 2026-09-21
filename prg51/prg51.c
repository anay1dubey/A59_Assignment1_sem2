#include <stdio.h>
int main()
{
    int n[8]={9,4,2,3,5,3,6,11};
    int nd[8];
    int i;
    printf("before\n");
    for(i=0;i<8;i++)
    {
        printf("%d,",n[i]);
    }
    printf("\n");
    for(int i=7;i>-1;i--)
    {
        nd[i]=n[7-i];
    }
    printf("after\n");
    for(int i=7;i>-1;i--)
    {
        n[i]=nd[i];
    }
    for(int i=0;i<8;i++)
    {
        printf("%d,",n[i]);
    }
}
