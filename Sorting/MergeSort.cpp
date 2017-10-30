#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int le[n1],ri[n2];
    for(int l=0;l<n1;l++)
        le[l]=a[low+l];
    for(int r=0;r<n2;r++)
        ri[r]=a[mid+r+1];
    ri[n2]=10000;le[n1]=10000;
    int i=0,j=0;
    for(int k=low;k<=high;k++)
    {
        if(le[i]<=ri[j])
        {
            a[k]=le[i];
            i++;
        }
        else
        {
            a[k]=ri[j];
            j++;
        }
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,0,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main()
{
    int i,n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of Array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Before Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    mergesort(a,0,n-1);
    cout<<endl<<"After  Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
//@author:raviraj96
