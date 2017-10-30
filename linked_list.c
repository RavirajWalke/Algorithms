/**
 *
 * @author Ravi
 */
 #include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};
struct list *head;

void insert(int x)
{
	struct list* new_node=(struct list*)malloc(sizeof(struct list));
	new_node->data=x;
	new_node->next=head;
	head=new_node;
}

void display()
{
	if(head==NULL)
		printf("list is empty\n");
	struct list *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data );
		temp=temp->next;
	}
	printf("\n");
}
struct list* ll_search(int x)
{
	if(head==NULL)
		printf("list is empty\n");
	struct list *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==x)
			break;
		temp=temp->next;
	}
	return temp;
}
void delete(int x)
{
	struct list *temp;
	temp=ll_search(x);
	
}

int main(int argc, char const *argv[])
{
	/* code */
	int ch,x,y;
	struct list* el;
	while(1)
	{
		printf("Enter 1.Insert 2.Delete 3.display 4.search 5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter value to add: ");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:printf("Enter value to delete: ");
				scanf("%d",&x);
				delete(x);
				break;
			case 3:display();
				break;
			case 4:printf("Enter value to search: ");
				scanf("%d",&y);
				el=ll_search(y);
				if(el==NULL)
					printf("Element not found\n");
				else
					printf("%d\n",el->data );
				break;
			case 5:exit(0);
		}
	}
	return 0;
}