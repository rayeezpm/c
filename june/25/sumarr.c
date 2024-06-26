#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4},sum=0,i;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    sum+=arr[i];
    printf("%d", sum);

    return 0;
}