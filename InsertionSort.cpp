#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int i,j,n,key;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Before Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    cout<<endl<<"After  Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
//@author:raviraj96
