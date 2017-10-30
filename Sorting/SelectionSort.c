#include<stdio.h>
int main()
{
    int n,i,j,smallind,temp;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        smallind=i;
        for(j=i+1;j<n;j++)
        {
            if(a[smallind]>a[j])
                smallind=j;
        }
        temp=a[i];
        a[i]=a[smallind];
        a[smallind]=temp;
    }
    printf("After Sorting:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
