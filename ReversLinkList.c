#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node* next;
};
void InsertFirst(struct node **first,int iNo)
{
	
	struct node *newn=NULL;
	
	newn=(struct node *)malloc(sizeof(struct node));
	newn->next=NULL;
	newn->data=iNo;
	
	if(*first==NULL)
	{	
		*first=newn;
	}
	else
	{
		newn->next=*first;
		*first=newn;
		
	}
	printf("\nNode inserted sucessfuly");
}
void Display(struct node *first)
{
	if(first==NULL)
	{
		printf("\nLink list is empty");
	}
	else
	{
		printf("\n");
		while(first!=NULL)
		{
			printf("\t%d",first->data);
			first=first->next;
		}
	printf("\n");
	}
	
}
void DisplayR(struct node *first)
{
	if(first!=NULL)
	{	
		
		DisplayR(first->next);
		printf("%d\t",first->data);
	}
}
int main()
{
	struct node *head=NULL;

	InsertFirst(&head,11);
	InsertFirst(&head,21);
	InsertFirst(&head,31);
	InsertFirst(&head,51);
	Display(head);
	DisplayR(head);
	
	return 0;

}
