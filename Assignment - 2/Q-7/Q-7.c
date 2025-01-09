


#include<stdio.h>

#define size 3

int f1=0;
int f2=0;

int r1=0;
int r2=0;

int SQ1[size];
int SQ2[size];


void insert()
{


        printf("\n Insertion :- ");

        printf("\n 1. Insert 1 :-");
        printf("\n 2. Insert 2 :-");

        int cho;
            printf("\n Enetr Your Choice :- ");
                scanf("%d",&cho);

                switch(cho)
                {
                    case 1:

                        if(r1==size)
                        {
                            printf("\n Overflow ");
                        }
                        else
                        {
                            r1++;
                            if(r1==1)
                            {
                                f1=1;

                            }

                            printf("\n Enter Value : ");
                                scanf("%d",&SQ1[r1]);
                        }


                            break;

                    case 2:

                        if(r2==size)
                        {
                            printf("\n Overflow ");
                        }
                        else
                        {
                            r2++;
                            if(r2==1)
                            {
                                f2=1;
                            }
                            printf("\n Enter value : ");
                                scanf("%d",&SQ2[r2]);
                        }

                        break;


                }

}

void display()
{
    if(f1==0)
    {
        printf("\n Underflow 1");
    }

    else
    {
        printf("\n Element 1 :- ");

        for(int i=f1;i<=r1;i++)
        {
            printf(" %d ",SQ1[i]);
        }
    }
    if(f2==0)
    {
        printf("\n Underflow 2 ");
    }

    else
    {
        printf("\n Elemet 2 :- ");

        for(int i=f2;i<=r2;i++)
        {
            printf(" %d ",SQ2[i]);
        }
    }
}

void delete()
{


        printf("\n Delete 1 :-");
        printf("\n Delete 2 :-");

        int cho;
            printf("\n Enter value : ");
            scanf("%d",&cho);

        switch (cho)
        {

            case 1:

            if(f1==0)
            {
                printf("\n Underflow : ");
            }

                if(f1==r1)
                {
                    printf("\n Reset Queue :-");
                    f1=0;
                    r1=0;

                }
                else
                {
                    printf("\n Delete elemet : %d",SQ1[f1]);
                    f1++;

                }
                break;


            case 2:

            if(f1!=0)
            {
                printf("\n Sorry Queue 1 Is Full ");
            }
            else
            {
                if(f2==0)
                {
                    printf("\n underflow");
                }
                if(f2==r2)
                {
                    printf("\n Reset Queue :-");
                    f2=0;
                    r2=0;
                }
                else
                {
                    printf("\n Deleted Element : %d ",SQ2[f2]);
                    f2++;
                }
            }

            break;
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
