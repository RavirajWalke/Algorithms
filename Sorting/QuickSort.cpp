#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int partition(int a[],int low,int high)
{
    int i,j,temp,pivot=a[high];
    i=low-1;
    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return(i+1);
}
void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int ele=partition(a,low,high);
        QuickSort(a,low,ele-1);
        QuickSort(a,ele+1,high);
    }
}

int main()
{
    int i,n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Before Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    QuickSort(a,0,n-1);
    cout<<endl<<"After  Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
//@author=raviraj96
