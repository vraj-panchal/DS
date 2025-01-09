/*
 * Q-6.c
 *
 *  Created on: 13-Sep-2024
 *      Author: root
 */



#include<stdio.h>

#define size 3
int r=0;
int f=0;
int PQ[size];
int *p;

void Insert();
void Display();
void Delete();

void Insert()
{
    p=PQ;
        printf("\n Insertion :-");
    if(r==size)
    {
        printf("\n Overflow :-");
    }
    else
    {
        r++;
        if(r==1)
        {
        f=1;
        }
        printf("\n Enter The Value : ");
        scanf("%d",(p+r));
    }
}
void Display()
{
    p=PQ;
    if(f==0)
    {
        printf("\n Underflow :-");
    }
    else
    {
        for(int i=f;i<=r;i++)
    {
        printf("\n Element : %d ",*(p+i));
    }
    }
}
void Delete()
{
    p=PQ;
    if(f==0)
    {
        printf("\n Underflow :-");
    }
    else
    {
        if(f==r)
        {
            printf("\n Reset Queue :-");
            f=0;
            r=0;
        }
    else
    {
        printf("\n Deleted Element : %d ",*(p+f));
        f++;
    }
    }
}


int main()
{
    back:
        printf("\n Your Choice List :- \n ");
        printf("\n 1. Insert :-");
        printf("\n 2. Display :-");
        printf("\n 3. Delete :-");

        printf("\n 4. Exit :-");
        int Choice;

        printf("\n Enter Your Choice : ");
        scanf("%d",&Choice);

        switch(Choice)
        {
            case 1:

                Insert();
                goto back;
                break;

            case 2:

                Display();
                goto back;
                break;

            case 3:

                Delete();
                goto back;
                break;

            case 4:
                printf("\n Thank You ");
                break;

            default :

                printf("\n Case is not found pls,Re-Enter The Case Number : ");
                goto back;

            break;
        }
    return 0;
}




