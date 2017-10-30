#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,temp;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Before Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
//*************Bubble Sorting***************l
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<endl<<"After  Sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
//@author:raviraj96
