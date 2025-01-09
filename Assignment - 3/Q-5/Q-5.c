/*
 * Q-5.c
 *
 *  Created on: 14-Oct-2024
 *      Author: root
 */




#include <stdio.h>

#include <stdlib.h>




void creation();

void Insert_first();

void Insert_middel();

void Insert_last();

void Delete_first();

void Delete_middel();

void Delete_last();

// void Display();

void Display_First_Last();

void Display_last_First();




int x;




struct Node

{

    int data;

    struct Node *right;

    struct Node *Left;




} *first = NULL, *last = NULL, *nn = NULL, *cur, *pre, *temp;




void creation()

{

    printf("\n Enter The Data (-1 to end) : ");

    scanf("%d", &x);




    while (x != -1)

    {

        nn = (struct Node *)malloc(sizeof(struct Node));




        nn->data = x;

        nn->right = NULL;

        nn->Left = NULL;




        if (first == NULL)

        {

            first = nn;

            last = nn;

        }

        else

        {

            last->right = nn;

            nn->Left = last;

            last = nn;

        }


        printf("\n Enter The Data (-1 to end) : ");

        scanf("%d", &x);

    }

}


void Display_First_Last()

{

    temp = first;

    while (temp->right != NULL)

    {

        printf("\n Element : %d", temp->data);

        temp = temp->right;

    }

    printf("\n Element : %d", temp->data);

}


void Display_last_First()

{

    temp = last;


    while (temp->Left != NULL)

    {

        printf("\n Element : %d ", temp->data);

        temp = temp->Left;

    }

    printf("\n Element : %d ", temp->data);

}


void Insert_first()

{

    printf("\n Enter The Data : ");

    scanf("%d", &x);


    nn = (struct Node *)malloc(sizeof(struct Node));


    nn->data = x;

    nn->right = first;

    first->Left = nn;

    first = nn;

    nn->Left = NULL;

}


void Insert_last()
{
    printf("\n Enter The Data : ");

    scanf("%d", &x);

    nn = (struct Node *)malloc(sizeof(struct Node));


    nn->data = x;

    nn->Left = last;

    last->right = nn;

    nn->right = NULL;

    last = nn;

}


void Insert_middel()
{

    int pos;

    int count = 1;


    pre = NULL;


    printf("\n Enter The Possition : ");

    scanf("%d", &pos);

    printf("\n Enter The Data : ");

    scanf("%d", &x);

    nn = (struct Node *)malloc(sizeof(struct Node));

    nn->data = x;

    cur = first;

    while (count < pos)

    {

        cur = cur->right;

        count++;

    }

    nn->Left = cur->Left;

    nn->right = cur;

    cur->Left->right = nn;

    cur->Left = nn;

}


void Delete_first()

{

    temp = first;




    first = first->right;

    free(temp);

    first->Left = NULL;

}


void Delete_last()

{

    last = last->Left;

    last->right = NULL;

}


void Delete_middel()

{

    int pos;

    int count = 1;


    printf("\n Enter The Possition : ");

    scanf("%d", &pos);

    cur=first;



    while (count < pos)

    {

        cur = cur->right;

        count++;

    }

    cur->Left->right = cur->right;

    cur->right->Left = cur->Left;

    free(cur);

}

int main()

{

    creation();

menu:


    printf("\n Your Chice List : \n");


    printf("\n 1. Insert Fitst : ");

    printf("\n 2. Insert Middel : ");

    printf("\n 3. Insert Last : ");

    printf("\n 4. Delete First : ");

    printf("\n 5. Delete Middel : ");

    printf("\n 6. Delete Last : ");

    printf("\n 7. Display First To Last : ");

    printf("\n 8. Display Last To First : ");


    int choice;

    printf("\n Enter Your choice :");

    scanf("%d", &choice);



    switch (choice)

    {

    case 1:


        Insert_first();


        goto menu;

    case 2:


        Insert_middel();

        goto menu;


    case 3:


        Insert_last();


        goto menu;

    case 4:

        Delete_first();


        goto menu;


    case 5:

        Delete_middel();


        goto menu;


    case 6:

        Delete_last();


        goto menu;


    case 7:


        Display_First_Last();


        goto menu;

    case 8:


        Display_last_First();

    case 9:

        printf("\n Program Is Exit >>");

        break;


    default:


        printf("\n Please Enter Valid Choice : ");

        break;

        goto menu;

    }




    return 0;

}
