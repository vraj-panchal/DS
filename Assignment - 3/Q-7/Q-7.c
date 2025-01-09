/*
 * Q-7.c
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ch[100];
int x;

struct CharNode
{
	char C;

	struct CharNode *next;
}*first1=NULL,*last1=NULL,*nn1=NULL,*temp1;




struct IntNode
{
	int data;

	struct IntNode *next;
}*first2=NULL,*last2=NULL,*nn2=NULL,*temp2;



struct MergeNode
{
	char Charecter;
	int integer;

	struct MergeNode *next;
}*first3=NULL,*last3=NULL,*nn3=NULL,*temp3;



void insert()
{
	printf("\n Enter The Character Data (-1 to end) : ");
	scanf("%s",ch);

	printf("\n Enter The Integer Data (-1 to end) : ");
	scanf("%d",&x);

		while(x!=-1)
		{
			nn1=(struct CharNode *)malloc(sizeof(nn1));
			nn2=(struct IntNode *)malloc(sizeof(nn2));

			nn1->C=ch[0];
			nn1->next=NULL;

			nn2->data=x;
			nn2->next=NULL;


			if(first1==NULL)
			{
				first1=nn1;
				last1=nn1;

				first2=nn2;
				last2=nn2;
			}

			else
			{
				last1->next=nn1;
				last1=nn1;

				last2->next=nn2;
				last2=nn2;
			}

				printf("\n Enter The Character Data (-1 to end) : ");
				scanf("%s",ch);

				printf("\n Enter The Integer Data (-1 to end) : ");
				scanf("%d",&x);


		}

}


void Display_char_List()
{
    temp1 = first1;
    printf("\nCharacter List:");
    while (temp1 != NULL)
    {
        printf(" %c ->", temp1->C);
        temp1 = temp1->next;
    }
    printf(" NULL\n");

}


void Display_Int_List()
{
	temp2=first2;

		printf("\n Integer List : ");

		while(temp2 !=NULL)
		{
			printf(" %d ->",temp2->data);
			temp2=temp2->next;
		}

		printf(" NULL \n");
}



void Merge()
{
	temp1=first1;
	temp2=first2;

	while(temp1 != NULL && temp2 !=NULL)
	{

		nn3=(struct MergeNode *)malloc(sizeof(nn3));

		nn3->Charecter=temp1->C;
		nn3->integer=temp2->data;
		nn3->next=NULL;

		if(first3 == NULL)
		{
			first3=nn3;
			last3=nn3;
		}
		else
		{
			last3->next=nn3;
			last3=nn3;
		}

		temp1=temp1->next;
		temp2=temp2->next;
	}

}



void Display()
{
	temp3=first3;

	printf("\n Merged List : ");

	while(temp3!=NULL)
	{
		printf("(%c , %d) -> ",temp3->Charecter,temp3->integer);
		temp3=temp3->next;
	}

	printf(" NULL \n");
}

int main()
{
	menu:

		printf("\n Your Choice List >> ");

		printf("\n 1. Insert Data : ");
		printf("\n 2. Display Character List :  ");
		printf("\n 3. Display Integer List : ");
		printf("\n 4. Merged Two Linked List : ");
		printf("\n 5. Display : ");
		printf("\n 7. Exit :");



		int choice;

			printf("\n Enter Your choice : ");
			scanf("%d",&choice);

		switch(choice)
		{
		case 1:

			insert();
			goto menu;

		case 2:

			Display_char_List();

			goto menu;

		case 3:

			Display_Int_List();

			goto menu;

		case 4:

			Merge();
			printf("\n Linked List Merged : ");

			goto menu;

		case 5:

			Display();

			goto menu;

		case 6:

			printf("\n Program is Exit Thank You >>>");

			break;

		default :

			printf("\n Enter The Valid Choice : ");

			break;

			goto menu;

		}

		return 0;

}






