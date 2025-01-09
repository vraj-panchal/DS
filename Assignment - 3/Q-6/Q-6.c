/*
 * Q-6.c
 *
 *  Created on: 09-Oct-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

int x;
struct Student
{
	int Roll_no,sem,Sub1,Sub2,Sub3;
	float total;
	char Name[50];
	struct Student *next;

}*first=NULL,*last=NULL,*nn=NULL,*temp,*pre,*cur;



void Insertion()
{
	printf("\n Enter The Data (-1 to end) : ");
	scanf("%d",&x);

		while(x!=-1)
		{
			nn = (struct Student *)malloc(sizeof(struct Student));

				printf("\n\n Enter The Student Details>>>>");

				printf("\n Enter Roll No : ");
				scanf("%d",&nn->Roll_no);

				printf("\n Enter Name : ");
				scanf("%s",nn->Name);

				printf("\n Enter The Sub 1 Marks : ");
				scanf("%d",&nn->Sub1);

				printf("\n Enter The Sub 2 Marks : ");
				scanf("%d",&nn->Sub2);

				printf("\n Enter The Sub 3 Marks : ");
				scanf("%d",&nn->Sub3);


				nn->total=nn->Sub1+nn->Sub2+nn->Sub3;


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

				printf("\n Enter The Value 1 to insert or -1 to stop: ");
				scanf("%d", &x);

		}

}


void Display()
{

    temp = first;

    printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");


    while (temp != NULL) {

        printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", temp->Roll_no, temp->Name, temp->sem, temp->Sub1, temp->Sub2, temp->Sub3, temp->total);

        temp = temp->next;

    }

}

void Display_Highest_Marks()
{
	if(first==NULL)
	{
		printf("\n No students available.");

	}

	struct Student *max=first;

	temp=first->next;

		while(temp!=NULL)
		{
			if(temp->total > max->total)
			{
				max=temp;
			}
			temp=temp->next;
		}

		 printf("\nStudent with the highest marks:");

		 printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

		 printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", max->Roll_no, max->Name, max->sem, max->Sub1, max->Sub2, max->Sub3, max->total);
}


void delete_by_rollno()
{

	if(first==NULL)
	{
		printf("\n List is Emty : ");
	}

	int delete;

	printf("\n Enter Toll No you Want To delte : ");
	scanf("%d",&delete);

	cur=first;
	pre=NULL;

		if(delete == first->Roll_no)
		{
			printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

			printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", cur->Roll_no, cur->Name, cur->sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);

			first = first->next;
			free(cur);
			return;
		}

	// if(cur !=NULL && first->Roll_no==delete)
	// {
	// 		printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

	// 		printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", cur->Roll_no, cur->Name, cur->sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);

	// 		first=first->next;
	// 		free(first);

	// 		return;
	// }

	while(cur!=NULL)
	{
		if(cur->Roll_no==delete)
		{
					 printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

					 printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", cur->Roll_no, cur->Name, cur->sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);
			pre->next=cur->next;
			cur->next=NULL;
			free(cur);
		}

		pre=cur;
		cur=cur->next;
	}

	if(cur==NULL)
	{
		printf("\n NOT Avilable: ");

	}
	if(cur==last)
	{

		printf("\nRoll No\t Name \t Sem \t Sub1 \t Sub2 \t Sub3 \t Total");

		printf("\n%d\t %s \t %d \t %d \t %d \t %d \t %f", cur->Roll_no, cur->Name, cur->sem, cur->Sub1, cur->Sub2, cur->Sub3, cur->total);

		last=pre;
	}
	free(cur);


}



int main()
{

    int choice;

    menu:

        printf("\n\n Your Choice >>> ");

        printf("\n 1. Insertion ");

        printf("\n 2. Display ");

        printf("\n 3. Display Highrst Marks : ");
        printf("\n 4. Delete By Roll No :");



        printf("\n 5. Exit ");

        printf("\n Enter Your Choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                Insertion();

                goto menu;

            case 2:

            	Display();

                goto menu;

            case 3:

                Display_Highest_Marks();

                goto menu;

            case 4:

            	delete_by_rollno();

            	goto menu;

            default:

                printf("\nInvalid Choice!");

                break;
        }

        return 0;

}








