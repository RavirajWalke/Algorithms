#include<iostream>
using namespace std;
int max(int a,int b)
{
    return (a>=b)? a:b;
}
int pzoknap(int w[],int p[],int n,int M)
{
    int B[n+1][M+1],i,j;
    for(i=0;i<=M;i++)
        B[0][i]=0;
    for(i=0;i<=n;i++)
        B[i][0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=M;j++)
        {
            if(w[i-1]>j)
                B[i][j]=B[i-1][j];
            else
                B[i][j]=max(p[i-1]+B[i-1][j-w[i-1]],B[i-1][j]);
        }
    }
    return B[n][M];
}
int main()
{
 int n,M;
 cin>>n>>M;
 int p[n],w[n];
 for(int i=0;i<n;i++)
     cin>>w[i]>>p[i];
  cout<<pzoknap(w,p,n,M);
 return 0;
}
