#include<stdio.h>
#include<conio.h>
int kadane(int a[],int n)
{
    int max_sum=0,i;
    int new_sum=0;
    for(i=0;i<n;i++)
    {
        new_sum=new_sum+a[i];
        if(new_sum<0)
        {
        return new_sum=0;
        }
        if(new_sum>max_sum)
        {
        max_sum=new_sum;
        }
    }
    return max_sum;
}

void main()
{
    int arr[20],n,i;
    printf("array size:\n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    kadane(arr,n);
    getch();
}
