#include <stdio.h>
int main()
{
    int i, c, r=10;
    for(i=1; i<=r; i++)
    {
        for(c=i; c<r; c++)
        {
        printf(" ");
        }

        for(c=1; c<=(2*i-1); c++)
        {
        if(i==r || c==1 || c==(2*i-1))
        {
        printf("*");
        }
        else
        {
        printf(" ");
        }
        }
    printf("\n");
    }
}