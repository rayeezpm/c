#include<stdio.h>
int main()
{
    int i,n,j,r=5;
    for(i=0;i<=r;i++)
    {
        for(n=0;n<2*(r-i)-1;n++)
        {
            printf(" ");
        }
         for (j=0;j<2*i+1;j++) 
        { 
            printf("1 "); 
        } 
        printf("\n"); 
    }
}