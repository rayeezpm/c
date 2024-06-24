#include<stdio.h>
int main()
{
  int i,n,k,r=5;
  for(i=0;i<=r;i++)
  {
    for(n=0;n<=r;n++)
    {
         for(k=0;k<=i;k++)
        {
            if(k==n)
            {
                printf("%d",k+1);
            }
        }
        printf(" ");
    }
  printf("\n");
}
}