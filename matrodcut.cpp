#include<iostream>
using namespace std;

int max(int a,int b)
{
    return (a>b)? a:b;
}
void matrodcut(int p[],int n)
{
    int v[n][n];
    v[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i)
                v[i][j]=max(v[i-1][j],p[i]+v[i][j-1]);
            else
                v[i][j]=v[i-1][j];
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,i;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    matrodcut(p,n);
    return 0;
}
