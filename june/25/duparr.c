#include <stdio.h>
int main()
{
    int a[]={1,3,2,4,5,1,4,7,5},i,k;
    int s=sizeof(a)/sizeof(a[0]);
    printf("duplicate values in the array :");
    for(i=0;i<s;i++)
    {
        for(k=i+1;k<s;k++)
        {
            if(a[i]==a[k])
            {printf("%d",a[k]);}
        }
    }
}