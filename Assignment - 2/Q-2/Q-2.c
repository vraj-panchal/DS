
#include<stdio.h>
#define size 3

int CQ[size];
int f=0;
int r=0;

void insert();
void display();
void delete();

void insert()
{
    if((r==size && f==1) || (r==f-1))
    {
        printf("\n Stack is Full ");
    }
    else
    {

            r++;

        if(r==1)
        {
            f=1;
        }
        printf("\n Enter Value : ");
        scanf("%d",&CQ[r]);


    }

}

void display()
{
    if(f==0)
    {
        printf("\n underflow ");
    }


    else
    {
        printf("\n Elemets : ");
        for(int i=f;i<=r;i++)
        {
            printf(" %d",CQ[i]);
        }
    }
}

void delete()
{
    if(f==0)
    {
        printf("\n Underflow ");
    }
    else
    {
        printf("\n Delete Element : %d",CQ[f]);
        f++;
        if(f==r)
    {
        f=0;
        r=0;
    }
    else if(f==size)
    {
        f=1;
    }
    else
    {

    }

}
}

int main()
{
    int choice;

    menu:
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Delete");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            goto menu;

        case 2:
            display();

            goto menu;

        case 3:
            delete();

            goto menu;

        case 4:
            printf("\n Thank you ");
            break;

        default:
            printf("\n Enter Valid Choice : ");
            break;
        }

        return 0;
}

