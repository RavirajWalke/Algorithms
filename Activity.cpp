#include<iostream>
using namespace std;
void sort(int s[],int f[])
{
 
}
void ActivitySelector(int s[],int f[],int n)
{
 int a[n];
 for(int i=0;i<n;i++)
    a[i]=0;
 int j=0;
 a[j]=1;
 int k=1;
 for(int m=1;m<n;m++)
 {
   if(s[m]>=f[k])
   {
    j++;
    a[j]=m+1;
    k=m;
   }
 }
 cout<<"Selected Activities are : ";
 for(int i=0;i<=j;i++)
   cout<<a[i]<<" ";
}
int main()
{
 int n,i,j;
 cout<<"Enter total no of activities"<<endl;
 cin>>n;
 int s[n],f[n];
 cout<<"Enter start time of each Activity"<<endl;
 for(i=0;i<n;i++)
 {
     cin>>s[i];
 }
 cout<<"Enter finish time of each Activity"<<endl;
 for(i=0;i<n;i++)
 {
     cin>>f[i];
 }
 sort(s,f);
 ActivitySelector(s,f,n);
 return 0;
}
