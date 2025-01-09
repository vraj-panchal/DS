/*
 * Q-9.c
 *
 *  Created on: 29-Jul-2024
 *      Author: root
 */

#include<stdio.h>

void array1()
{
	int n;

		printf("Enter The array size : ");
			scanf("%d",&n);

	int a1[n];

		for(int i=0 ; i<n ;i++)
		{
			printf("Enter The Elements [%d] : ",i);

				scanf("%d",&a1[i]);
		}

		printf("\n        Elements    Address\n\n");

		for(int i=0 ;i<n; i++)
		{
			printf("Arry[%d]\t   %d\t   %u\n",i ,a1[i] , &a1[i]);
		}



}

void array2()
{
	int x,y;

			printf("\nEnter The 2D Array Size : ");
				scanf("%d %d",&x,&y);

				int a2[x][y];

				for(int i=0 ; i<x ; i++)
				{
					for(int j=0 ; j<y ; j++)
					{
						printf("Enter The Elemets [%d][%d] : ",i,j);

							scanf("%d",&a2[i][j]);
					}
				}


				printf("\n\t    Elements\t Address\n\n");

					for(int i=0 ; i<x ; i++)
					{
						for(int j=0 ; j<y ; j++)
						{
							printf("Arry[%d][%d]\t %d\t %u\n",i,j,a2[i][j] , &a2[i][j]);
						}
					}

}


int main()
{

	int choice;

	menu:

			printf("\n 1. 1D Array Performance \n");
			printf(" 2. 2D Array Performance \n");
			printf(" 3. Exit....");

		printf("\n---Enter Your Choice : ");
			scanf("%d",&choice);

			switch(choice)
			{
			case 1:
				array1();
				goto menu;

			case 2:
							array2();
							goto menu;
			case 4:

				printf("Exit Program : ");

				break;
			default :
					printf("Enter The Valid Choice : ");


			}

			return 0;
}
