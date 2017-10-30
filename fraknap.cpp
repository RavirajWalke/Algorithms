#include<iostream>
using namespace std;
int main()
{
  int n,Wmax,i,j,key2,wt=0;
  cout<<"Enter the no of items and max capacity:";
  cin>>n>>Wmax;
  int w[n];
  cout<<"Enter weight and it's respective value:"<<endl;
  double cpi[n],sum=0,key1,p[n];
  for(i=0;i<n;i++)
  {
    cin>>w[i]>>p[i];
    cpi[i]=p[i]/w[i];
  }

  for(i=1;i<n;i++)
    {
        key1=cpi[i];
        key2=w[i];
        j=i-1;
        while(j>=0&&cpi[j]<key1)
        {
            cpi[j+1]=cpi[j];
            w[j+1]=w[j];
            j=j-1;
        }
        cpi[j+1]=key1;
        w[j+1]=key2;
    }

  for(i=0;i<n;i++)
  {
    cout<<cpi[i]<<" "<<w[i]<<endl;
  }
  for(i=0;i<n;i++)
  {
    wt=wt+w[i];
    if(wt<Wmax)
    {
      sum=sum+cpi[i]*w[i];
    }
    else
      break;
  }
  sum=sum+(Wmax-(wt-w[i]))*cpi[i];
  cout<<"Maximum Profit is: "<<sum<<endl;
}
