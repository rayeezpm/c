#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    printf("%d\t",a[i]);
}