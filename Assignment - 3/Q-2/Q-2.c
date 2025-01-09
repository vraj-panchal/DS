/*
 * Q-2.c
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

				if(first == NULL)
				{
					first=nn;
					last=nn;
				}
				else
				{
					nn->next=first;
					last->next=first;
					last=nn;
				}

				printf("\n Enter The value (-1 for end)" );
				scanf("%d",&x);

		}
}



void display()
{
	temp=first;

	while(temp->next!=first)
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

			last->next=nn;
			last=nn;
			nn->next=NULL;


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

		nn->data=x;
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
	if(first==NULL)
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
			last->next=first;
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

		 pre->next = cur->next;

		 free(cur);
}



int main()
{
	create();

	int c;

	menu:

	    printf("\n 1. Insert first : ");

	    printf("\n 2. Insert Middel : ");

	    printf("\n 3. insert Last : ");

	    printf("\n 4. Delete first : ");

	    printf("\n 5. Delete Middel : ");

	    printf("\n 6. Delete Last : ");

	    printf("\n 7. Display");

	    printf("\n Enter your Choice : ");

	    scanf("%d", &c);


	    switch (c)

	    {

	    case 1:

	    	insert_first();

	        goto menu;

	    case 2:

	    	insert_middel();

	        goto menu;

	    case 3:

	    	insert_last();

	        goto menu;

	    case 4:

	    	delete_first();

	        goto menu;

	    case 5:

	    	delete_middel();

	        goto menu;

	    case 6:

	    	delete_last();

	        goto menu;

	    case 7:

	    	display();

	        goto menu;


	    case 8:

	        printf("\n Program Is Exit Thank You : ");


	        break;

	    default:


	        printf("\n Please Valid Choice : ");

	        break;

	    }

	    return 0;

}






