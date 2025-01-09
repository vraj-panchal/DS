/*
 * Q-1.c
 *
 *  Created on: 09-Sep-2024
 *      Author: root
 */

#include<stdio.h>

#define size 3

int SQ[size];
int f=0;
int r=0;

void input()
{
	if(r==size)
	{
		printf("\n overflow \n");
	}
	else
	{
		r++;
		if(r==1)
		{
			f=1;
		}

		printf("\n Enter Value : ");
		scanf("%d",&SQ[r]);
	}
}

void display()
{
	if(f==0)
	{
		printf("\n Underflow ");
	}
	else
	{
		printf("\n Element : ");
		for(int i=f;i<=r;i++)
		{
			printf(" %d ",SQ[i]);
		}
	}
}

void delete()
{
	if(f==0)
	{
		printf("\n Underflow \n");
	}

	if(r==f)
	{
			r=0;
			f=0;
	}

	else
	{
		printf("\n Delete Element : %d",SQ[f]);
		f++;
	}

}

int main()
{
	int choice;

		menu :
			printf("\n 1. Insertion :-");
			printf("\n 2. Display :-");
			printf("\n 3. Deletion :-");
			printf("\n 4. Exit :-");

			printf("\n Enter Your Choice : ");
			scanf("%d",&choice);

				switch(choice)
				{
				case 1:
					input();
					goto menu;

				case 2:
					display();
					goto menu;

				case 3:
					delete();

					goto menu;

				case 4:
					printf("\n Thank You ..");

					break;
				default:
					printf("\n Please Enter Valid Choice : ");
				}

				return 0;
}
