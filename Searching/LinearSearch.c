/**
 *
 * @author Ravi
 */
#include<stdio.h>
int LSearch(int a[],int s,int low,int high)
{
    int i,found=0;
    for(i=low;i<=high;i++)
    {
        if(a[i]==s)
        {
            found=1;
            break;
        }
    }
    if(found==0)
        return 0;
    else
        return i+1;
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
    int c=LSearch(a,s,0,n-1);
    if(c==0)
       printf("element not found\n");
    else
        printf("element found at index %d\n",c);
    return 0;
}

