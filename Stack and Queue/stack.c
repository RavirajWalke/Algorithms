#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int s[MAX];
int top=-1;

void push(int x)
{
	if(top>=MAX)
		printf("Stack is Full\n");
	else
		s[++top]=x;
}

void pop()
{
	if(top<0)
		printf("Stack is empty\n");
	else
		printf("%d\n",s[top--]);
}
int main(int argc, char const *argv[])
{
	int ch,x,i;
	while(1){
	printf("Enter 1.push 2.pop 3.display 4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter value to push\n");
			scanf("%d",&x);
			push(x);
			break;
		case 2:
			pop();
			break;
		case 3:printf("Stack is:");
			for ( i = top; i >=0; i--)
			{
				/* code */
				printf("%d\t",s[i] );

			}
			printf("\n");
			break;
		case 4:exit(0);
	}
	}
	return 0;
}