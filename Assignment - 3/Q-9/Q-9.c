/*
 * Q-9.c
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

void Creation()
{
	printf("\n Enter The Data (-1 to end) : ");
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
					printf("\n Enter The Data (-1 to end) : ");
					scanf("%d",&x);
		}
}

void Display()
{
	temp=first;

		while(temp!=last)
		{
			printf("\n Element : %d ",temp->data);
			temp=temp->next;
		}
		printf("\n Element : %d ",temp->data);

}


void Addition()
{
	int sum=0;

	temp=first;

		while(temp!=NULL)
		{
			sum=sum+temp->data;
			temp=temp->next;
		}

		printf("\n Addition Of Singly Linked Lit : %d",sum);
}


int main()

{
    menu:

        printf("\n Your choice List .. ");

        printf("\n 1. Insertion/Creation ");

        printf("\n 2. Display ");

        printf("\n 3. Addition ");

        printf("\n 4. Exit : ");

        int choice;


            printf("\n Enter Your Choice : ");

            scanf("%d",&choice);

        switch (choice)

        {

        case 1:

                Creation();

            goto menu;

        case 2:

        	Display();

            goto menu;

        case 3:

                Addition();

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


