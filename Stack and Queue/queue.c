#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Q[MAX];
int head=-1,tail=-1;
void enque(int x)
{
	Q[tail++]=x;
}
int isEmpty()
{
	if(tail==-1||head==tail)
		return 1;
	else return 0;
}
int deque()
{
	if(isEmpty())
		printf("Queue is Empty\n");
	else
		 printf("%d\n",Q[head++]);
}
void display()
{
	int i;
	for(i=head;i<tail;i++)
		printf("%d\t",Q[i] );
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int ch,x,i;
	while(1){
	printf("Enter 1.Enque 2.Deque 3.display 4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter value to EnQue\n");
			scanf("%d",&x);
			enque(x);
			break;
		case 2:
			deque();
			break;
		case 3:display();
			break;
		case 4:exit(0);
	}
	}
	return 0;
}