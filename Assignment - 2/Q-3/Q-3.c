/*
 * Q-3.c
 *
 *  Created on: 09-Sep-2024
 *      Author: root
 */


#include <stdio.h>
#define size 5

int deque[size];
int f = -1, r = -1;

void insertRear();
void deleteFront();
void deleteRear();
void display();


void insertRear()
{
    if (r==size-1)
    {
        printf("\nDeque is Full\n");
    } else
    {
        int value;
        printf("\nEnter Value: ");
        scanf("%d", &value);

        if (f == -1)
        {
            f = 0;
        }
        r++;
        deque[r] = value;
    }
}

void deleteFront()
{
    if (f == -1)
    {
        printf("\nDeque is Empty\n");
    } else
    {
        printf("\nDeleted Element from Front: %d\n", deque[f]);
        f++;
        if (f == r)
        {
            // Queue is now empty
            f = -1;
            r = -1;
        }
    }
}

void deleteRear()
{
    if (f == -1)
    {
        printf("\nDeque is Empty\n");
    }
    else
    {
        printf("\nDeleted Element from Rear: %d\n", deque[r]);
        r--;
        if (f == r)
        {
            // Queue is now empty
            f = -1;
            r = -1;
        }
    }
}

void display()
{
    if (f == -1)
    {
        printf("\nDeque is Empty\n");
    } else
    {
        printf("\nElements in Deque: ");

        for(int i=f ;i<r;i++)
        {
            printf(" %d ",deque[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    menu:
    printf("\n1. Insert at Rear");
    printf("\n2. Delete from Front");
    printf("\n3. Delete from Rear");
    printf("\n4. Display");
    printf("\n5. Exit");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            insertRear();
            goto menu;

        case 2:
            deleteFront();
            goto menu;

        case 3:
            deleteRear();
            goto menu;

        case 4:
            display();
            goto menu;

        case 5:
            printf("\nThank you\n");
            break;

        default:
            printf("\nEnter Valid Choice\n");
            goto menu;
    }

    return 0;
}



