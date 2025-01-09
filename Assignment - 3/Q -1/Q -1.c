/*
 * Q -1.c
 *
 *  Created on: 04-Oct-2024
 *      Author: root
 */


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*first=NULL,*last=NULL,*nn=NULL,*temp,*cur,*pre,*dub=NULL;

void create();
void insert_first();
void insert_last();
void insert_middel();
void delete_first();
void delete_last();
void delete_middel();
void display();
void shorting();

int main()
{
	create();
	int c;

		do{
			printf("\n 1 Insert first");
			printf("\n 2 Insert last");
			printf("\n 3 Insert middel");
			printf("\n 4 Delete first");
			printf("\n 5 Delete last");
			printf("\n 6 Delete middel");
			printf("\n 7 display");
			printf("\n 8 Short");

			printf("\n Enter Your Choice : ");
			scanf("%d",&c);

			switch(c)
			{
			case 1:
				insert_first();
					break;

			case 2:
					insert_last();
					break;

			case 3:
					insert_middel();
					break;

			case 4:
					delete_first();
				break;

			case 5:
					delete_last();
				break;

			case 6:
				delete_middel();
				break;

			case 7:
					display();
				break;

			case 8:

				shorting();
				 break;


			default:
				break;



			}
							printf("\n\n Do You want To Continue >....");
							printf("\n If Yes :) 1 or No 0 : ");
							scanf("%d",&c);


			}while(c==1);
		return 0;

		}


void create()
{
	int x;

	printf("\n Enter Value (-1 for end)");
	scanf("%d",&x);

		while(x!=-1)
		{
			nn=(struct node*)malloc(sizeof(nn));
			nn->data=x;
			nn->next=NULL;

				if(first==NULL)
				{
					first=nn;
					last=nn;
				}
				else
				{
					last->next=nn;
					last=nn;
				}

				printf("\n Enter The value (-1 for end)" );
				scanf("%d",&x);

		}
}

void display()
{
	temp=first;

	while(temp!=NULL)
	{
		printf("\n Linked List Elements : %d",temp->data);
		temp=temp->next;
	}

}

void insert_first()
{
	int x;
	printf("\n Enter The Value : ");
	scanf("%d",&x);

		nn=(struct node *)malloc(sizeof(nn));
		nn->data=x;
		nn->next=first;
		first=nn;

}

void insert_last()
{
	int x;
		printf("\n Enter The Value : ");
		scanf("%d",&x);

			nn=(struct node *)malloc(sizeof(nn));

			nn->data=x;
			nn->next=NULL;
			last->next=nn;
			last=nn;


}


void insert_middel()
{
	int count,pos,x;

	printf("\n Enter The Position : ");
	scanf("%d",&pos);

	printf("\n Enter The Value : ");
	scanf("%d",&x);
	count=1;
		nn=(struct node *)malloc(sizeof(nn));
			nn->data=x;
			nn->next=NULL;
			pre=NULL;
			cur=first;

		while(count<pos)
		{
			pre=cur;
			cur=cur->next;
			count++;
		}

		pre->next=nn;
		nn->next=cur;


}

void delete_first()
{
	if(first==NULL)
	{
		printf("\n List Empty ");

	}
	else
	{
		printf("\n Delete Element is %d",first->data);
		temp=first;
		first=first->next;
		free(temp);
	}
}


void delete_last()
{
	if(first == NULL)
		{
			printf("\n List Empty ");

		}
		else
		{
			printf("\n Delete Element : %d",last->data);
			temp=first;
			while(temp->next!=last)
			{
				temp=temp->next;
			}
			free(last);
			last=temp;
			last->next=NULL;
		}
}


void delete_middel()
{
	int count,pos;

		printf("\n Enter The Position : ");
		scanf("%d",&pos);

		count=1;

		pre=NULL;
		cur=first;

		while(count<pos)
		{
			pre=cur;
			cur=cur->next;
			count++;

		}
		printf("\n Delete elements %d ",cur->data);

		if(cur==last)
		{
			free(last);
			last=pre;
			last->next=NULL;
		}
		else
		{
			pre->next=cur->next;
			free(cur);

		}
}


void shorting()
{
	pre=first;
	cur=first->next;


	while(cur!=NULL)
	{
		temp=pre;

		while(pre !=NULL)
		{
			if(temp->data > pre ->data)
			{
				int v=temp->data;
				temp->data=pre->data;
				pre->data=v;
			}
			pre=pre->next;
		}
		pre=cur;
		cur=cur->next;
	}
}
