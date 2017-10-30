#include<iostream>
using namespace std;
int right(int i)
{
    return(2*i+1);
}
int left(int i)
{
    return(2*i);
}
void MaxHeapify(int a[],int i,int heap_size)
{
    int largest=-10000;
    int l=left(i);
    int r=right(i);
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

int BuildMaxHeap(int a[],int n)
{
    int heap_size=n;
    for(int i=n/2;i>=0;i--)
        MaxHeapify(a,i,heap_size);
    return heap_size;
}
void HeapSort(int a[],int n)
{
    int heap_size=BuildMaxHeap(a,n);
    for(int i=n;i>0;i--)
    {
        int temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heap_size=heap_size-1;
        MaxHeapify(a,0,heap_size);
    }

}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    HeapSort(a,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
