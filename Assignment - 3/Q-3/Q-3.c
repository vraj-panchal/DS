/*
 * Q-3.c
 *
 *  Created on: 04-Oct-2024
 *      Author: root
 */


#include<stdio.h>
#include<stdlib.h>

int x;

struct Node
{
	int data;
	struct Node *next;

}*first=NULL, *last=NULL,*nn=NULL,*cur, *pre,*temp;


void creation()
{
	printf("\n Enter The Data (-1 To end) : ");
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

			printf("\n Enter The Data (-1 To end) : ");
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
	if(first==NULL)
	{
		printf("\n Underflow ");
	}
	else
	{
		temp=first;
		first=first->next;
		free(temp);
	}
}



int main()
{
	menu:

		printf("\n Your List >>\n");

		printf("\n 1. Insertion/creation >>>");
		printf("\n 2. Deletion >>>");
		printf("\n 3. Display >>>");

		int choice;

			printf("\n Enter your choice : ");
			scanf("%d",&choice);


			switch(choice)
			{
			case 1:
				creation();

				goto menu;

			case 2:
				Deletion();

				goto menu;

			case 3:
				Display();

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
