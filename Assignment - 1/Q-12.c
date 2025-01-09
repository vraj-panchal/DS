/*
 * Q-12.c
 *
 *  Created on: 03-Aug-2024
 *      Author: root
 */



#include<stdio.h>

//global Variable


int top=-1;
int stack[20];
int *ptr=&stack[0];


//function Declaration;

void Push(int value,int size);
void Pop();
void Display();



//Function Push

void Push(int value,int size)
{
	int *vl;
	vl=&value;

	if(top==(size-1))
	{
		printf("\n----Stack Is Overflow----\n");
	}

	else
	{
		top=top+1;
		*ptr=*vl;
		ptr++;
		vl++;
	}
}

//Function Pop

void Pop()
{
	int value;
	int *vl;
	vl=&value;

		if(top==-1)
		{
			printf("\n----Stack Underflow----\n");
		}
		else
		{
			*vl=*ptr;
			top=top-1;
				printf("%d",*vl);
		}
}


//Function Display

void Display()
{
	int i;

		if(top==-1)
		{
			printf("\n----Stack Is Underflow----\n");
		}

			printf("\n--STack Elements are Below--\n");


			for(i=top ; i>=0 ; i--)
			{
				printf("%d\n",*ptr);
				ptr++;
			}
}




int main()
{
	int ch,size,value;
	int *vl;
	vl=&value;

		printf("Enter Size Of Stack : ");
			scanf("%d",&size);


			menu:

				printf("\n 1. Push\n");
				printf(" 2. Pop\n");
				printf(" 3. Display\n");
				printf(" 4. Exit");

				printf("\nEnter Your Choice : \n");
					scanf("%d",&ch);

					switch(ch)
					{
					case 1:

						printf("Enter The Push Elements : ");
							scanf("%d",vl);

							Push(value,size);
							 Display();

						goto menu;

					case 2:
							 Pop();

						goto menu;

					case 3:
							 Display();

						goto menu;



					case 4:

							printf("\n----Exit The Program----");
							break;

					default:
						printf("\n--Please Enter The Valid Choice....\n");


					}

					return 0;


}
