/*
 * Q-4.c
 *
 *  Created on: 07-Oct-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

int x;

struct Node
{
	int data;
	struct Node *next;
}*first=NULL,*last=NULL,*nn=NULL,*cur,*pre,*temp;


void creation()
{
	printf("\n Enter Data (-1 to end) : ");
	scanf("%d",&x);


		while(x!=-1)
		{
			nn=(struct Node *)malloc(sizeof(nn));

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

			printf("\n Enter Data (-1 to end) : ");
			scanf("%d",&x);
		}
}

void Display()
{
	temp=first;

	while(temp!=last)
	{
		printf("\n Element : %d",temp->data);
		temp=temp->next;
	}
	printf("\n Element : %d",temp->data);
}

void Deletion()
{
	temp=first;

		while(temp->next!=last)
		{

			temp=temp->next;

		}

		free(last);
		last=temp;
		last->next=NULL;


}


int main()
{
	menu:

		printf("\n Your List >>\n");

		printf("\n 1. Insertion/Creation : ");
		printf("\n 2. Display : ");
		printf("\n 3. Deletion : ");

			int choice;

			printf("\n Enter Your Choice : ");
			scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			creation();

			goto menu;

		case 2:

			Display();

			goto menu;

		case 3:

			Deletion();

			goto menu;

		case 4:

		            printf("\n Program is Exit Thank You : ");

		            break;


		        default:


		            printf("\n Please Enter The Valid Choice ");

		            goto menu;
		            break;

		        }

		        return 0;
		}

