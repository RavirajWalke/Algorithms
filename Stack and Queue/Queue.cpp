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
int st[100],front=-1,rear=-1;
void enque(int a)
{
    rear++;
    st[rear]=a;
}
int isEmpty()
{
    if(rear==-1||front==rear)
        return 1;
    else
        return 0;
}
int deque()
{
    front++;
    return(st[front]);
}
void display()
{
    for(int j=front+1;j<=rear;j++)
        cout<<st[j]<<" ";
    cout<<endl;
}
int main()
{
    while(1)
    {
        cout<<"enter 1.enque 2.deque 3.display 4.exit"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter element to insert"<<endl;
                int a;
                cin>>a;
                enque(a);
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
                    int b=deque();
                    cout<<b<<endl;
                }
                break;
            }
        case 3:
            {
                if(isEmpty())
                {
                    cout<<"queue is empty"<<endl;
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
