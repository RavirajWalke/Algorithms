#include<iostream>
using namespace std;

int max(int a,int b)
{
    return (a>b)? a:b;
}

int rodcut(int p[],int n)
{
    int pr,q;
    if(n==0)
        return 0;
    q=-10000;
    for(int i=1;i<=n;i++)
    {
        q=max(q,p[i]+rodcut(p,n-i));
    }
    return q;
}

int main()
{
    int n;
    cout<<"enter length of rod";
    cin>>n;
    int p[n];
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    cout<<rodcut(p,n);
    return 0;
}
