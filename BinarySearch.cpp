#include<iostream>
using namespace std;
int BSearch(int a[],int search,int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        if(a[mid]==search)
           return 1;
        else if(search>a[mid])
            return (BSearch(a,search,mid+1,high));
        else
            return (BSearch(a,search,0,mid-1));
    }
    else
        return 0;
}

int main(void)
{
    int i,search,j,n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter Element to search : ";
    cin>>search;
    int c=BSearch(a,search,0,n-1);
    if(c==0)
        cout<<search<<" not found";
    else
        cout<<search<<" found";
    return 0;
}

