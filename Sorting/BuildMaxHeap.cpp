#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int Left(int i)
{
    return (2*i);
}

int Right(int i)
{
    return (2*i+1);
}
void MaxHeapify(int a[],int i,int heap_size)
{
    int largest=-1000;
    int l=Left(i);
    int r=Right(i);
    if(l<=heap_size&&a[l]>a[i])
        largest=l;
    else
        largest=i;
    if(r<=heap_size&&a[r]>a[largest])
        largest=r;
    if(largest!=i)
    {
        int temp=a[i];
            a[i]=a[largest];
            a[largest]=temp;
            MaxHeapify(a,largest,heap_size);
    }
}

void BuildMaxHeap(int a[],int n)
{
    int heap_size=n;
    for(int i=n/2;i>=0;i--)
        MaxHeapify(a,i,heap_size);
    //return heap_size;
}
int main()
{
    int i,n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    BuildMaxHeap(a,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
//@author:raviraj96
