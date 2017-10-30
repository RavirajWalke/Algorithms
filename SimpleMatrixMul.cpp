#include<iostream>
using namespace std;
int main(void)
{
    int i,j,k,n;
    cin>>n;
    int a[n][n],b[n][n],c[n][n];
    cout<<"enter elements of matrix a"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    cout<<"enter elements of matrix b"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>b[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    cout<<"multiplication of a and b is:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<"\n";
    }
}
