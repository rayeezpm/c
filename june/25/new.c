#include<stdio.h>
int main()
{
    int i,b,r=15;
    for(i=0;i<=r;i++)
    {
        for(b=0;b<=r;b++)
        {
            if(i==b)
            {
            printf("[Hello world]");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}