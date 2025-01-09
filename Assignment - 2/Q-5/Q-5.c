


#include<stdio.h>

#define size 3

int f=size+1;
int r=size+1;
int RQ[size];

void input()
{
    if(r==1)
    {
        printf("\n overflow ");
    }
    else
    {
        r--;
        if(r==size)
        {
            f=size;
        }
        printf("\n Enter Value : ");
        scanf("%d",&RQ[r]);
    }
}

void diaplay()

{
    printf("\n Display Details : ");

    if(f==size+1)
    {
        printf("\n Underflow ");
    }
    else
    {
        printf("\n Elements : ");
        for(int i=r;i<=f;i++)
        {
            printf(" %d ",RQ[i]);
        }
    }
}

void delete()
{
    if(f==size+1)
    {
        printf("\n Underflow :");
    }
    else
    {
        if(f==r)
        {
            printf("\n Reset Queue : ");
            f=size;
            r=size;
        }
        else
        {
            printf("\n Delete Element : %d ",RQ[f]);
            f--;
        }
    }
}

int main()
{
    menu:
        printf("\n 1. insert :-");
        printf("\n 2. Display:-");
        printf("\n 3. Delete :-");
        printf("\n 4. Exit. :-");

        int choice;

            printf("\n Enter Your choice : ");
                scanf("%d",&choice);

            switch(choice)
            {
                case 1:
                    input();

                    goto menu;

                case 2:
                    diaplay();

                    goto menu;

                case 3:
                    delete();

                    goto menu;

                case 4:

                    printf("\n Thank You ");

                    break;

                default:
                    printf("\n Please Enter Valid Choice ");
                    break;
            }

            return 0;
}




