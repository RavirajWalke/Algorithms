#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Q[MAX];
int head=-1,tail=-1;
void enque(int x)
{
	tail++;
	if(tail==MAX)
		tail=0;
	Q[tail]=x;
}

int deque()
{
	int x;
	x=Q[head];
	if(head==MAX)
		head=0;
	else
		head++;
	printf("%d\n",x );;
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
		case 3:printf("Queue is:");
			for ( i = 0; i<MAX; i++)
			{
				/* code */
				printf("%d\t",Q[i] );

			}
			printf("\n");
			break;
		case 4:exit(0);
	}
	}
	return 0;
}