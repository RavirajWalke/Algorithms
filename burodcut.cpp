#include<iostream>
using namespace std;
int maxm(int a,int b)
{
    return (a>b)? a:b;
}

int burodcut(int p[],int n)
{
    int q,i,j;
    int r[n+1];
    r[0]=0;
    for(i=1;i<=n;i++)
    {
        q=-10000;
        for(j=1;j<=i;j++)
        {
            q=maxm(q,p[j]+r[i-j]);
        }
        r[i]=q;
    }
    return r[n];
}

int main()
{
    int n;
    cout<<"enter length of rod:";
    cin>>n;
    int p[n];
    cout<<"Enter price for each length:\n";
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    cout<<burodcut(p,n);
    return 0;
}
