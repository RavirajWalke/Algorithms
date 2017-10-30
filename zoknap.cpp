#include<iostream>
using namespace std;
int max(int a,int b)
{
 return (a>b)? a:b;
}

int knapsack(int tw,int w[],int p[],int n)
{
 if(n==0||tw==0)
   return 0;
 if(w[n-1]>tw)
   return knapsack(tw,w,p,n-1);
 else
   return (max(knapsack(tw,w,p,n-1),p[n-1]+knapsack(tw-w[n-1],w,p,n-1)));
}

int main()
{
 int n,i,j,k,tw;
 cout<<"Enter total no of items and tot weight:";
 cin>>n>>tw;
 int w[n],p[n];
 cout<<"Enter weight and corresponding price"<<endl;
 for(i=0;i<n;i++)
    cin>>w[i]>>p[i];
 cout<<knapsack(tw,w,p,n)<<endl;
 return 0;
}
