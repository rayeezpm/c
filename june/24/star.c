#include<stdio.h>
int main()
{
    int i,n,r=5;
    for(i=0;i<=r;i++)
    {
        for(n=0;n<=r;n++)
        {
            if(n<=i)
            {
                printf("%c",'A'+n);
            }
        }
        printf("\n");
    }
}