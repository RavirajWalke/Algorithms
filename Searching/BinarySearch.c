/**
 *
 * @author Ravi
 */
#include<stdio.h>
int BSearch(int a[],int s,int low,int high)
{
    //int c=0;
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(s==a[mid])
           return 1;//c=1;
        else if(s>a[mid])
            return (BSearch(a,s,mid+1,high));
        else
            return (BSearch(a,s,0,mid-1));
    }
    else
        return 0;
}

int main(void)
{
    int i,s,j,n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search\n");
    scanf("%d",&s);
    int c=BSearch(a,s,0,n-1);
    if(c==0)
       printf("element not found\n");
    else
        printf("element found\n");
    return 0;
}

