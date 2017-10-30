/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;
int st[100],top=-1;;
void push(int a)
{
    top++;
    st[top]=a;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int pop()
{
    top--;
    return(st[top++]);
}
void display()
{
    for(int j=top;j>=0;j--)
        cout<<st[j]<<" ";
    cout<<endl;
}
int main()
{
    while(1)
    {
        cout<<"enter 1.push 2.pop 3.display 4.exit"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter element to push"<<endl;
                int a;
                cin>>a;
                push(a);
                break;
            }
        case 2:
            {
                if(isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                    break;
                }
                else
                {
                    int b=pop();
                    cout<<b<<endl;
                }
                break;
            }
        case 3:
            {
                if(isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                    break;
                }
                else
                    display();
                break;
            }
        case 4:exit(0);
        }
        }
    return 0;
}
