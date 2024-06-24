#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<=n;i++)
    {
        for(int s=0;s<2*(n-i)-1;s++)
        {
        printf(" ");
        }
        for (int k=0;k<2*i+1;k++) 
        { 
        printf(" *"); 
        } 
        printf("\n");
    }
    return 0;
}