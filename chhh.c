#include<stdio.h>
#include<string.h>
int main()
{
int arr[7],i,j,k,target;
printf("input array");
for(i=0;i<7;i++)
{
    scanf("%d",arr[i]);
}
pritnf("enter the target value");
scanf("%d",&target);
for(j=0;j<7;j++)
{
    for(k=0;k<7;k++)
    {
        if(arr[i]+arr[j]==target)
        {
            printf("%d%d\n",i,j);
        }
    }
    return 0;
}
