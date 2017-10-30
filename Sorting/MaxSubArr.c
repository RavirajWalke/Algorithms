#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max_sum=maxsub(a,0,n-1);
    printf("%d",max_sum);
    return 0;
}
int maxsub(int a[],int low,int high)
{
    int mid,left_sum,right_sum,cross_sum;
    if(high==low)
        return(a[low]);
    else
    {
        mid=(low+high)/2;
        left_sum=maxsub(a,low,mid);
        right_sum=maxsub(a,mid+1,high);
        cross_sum=crosssub(a,low,mid,high);
        if(left_sum>=right_sum&&left_sum>=cross_sum)
            return(left_sum);
        else if(right_sum>=left_sum&&right_sum>=cross_sum)
            return(right_sum);
        else
            return(cross_sum);
    }
}
int crosssub(int a[],int low,int mid,int high)
{
    int sum=0,max_left=-1000,max_right=-1000,i,j;
    for(i=mid;i>=low;i--)
    {
        sum=sum+a[i];
        if(sum>=max_left)
            max_left=sum;
    }
    sum=0;
    for(j=mid+1;j<=high;j++)
    {
        sum=sum+a[j];
        if(sum>=max_right)
            max_right=sum;
    }
    return(max_left+max_right);
}
