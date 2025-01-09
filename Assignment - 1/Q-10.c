
#include <stdio.h>

// Function Declaration


// glbal variable Declaration

int top = -1;
int stack[20];

// main function


// Function Definition For Push Operation

void Push(int value, int size)
{
    if (top == (size - 1))
    {
        printf("\n----Stack Overflow----\n");
    }

    else
    {
        top = top + 1;

        stack[top] = value;
    }
}

// Function Definition For Pop Operation

void Pop()
{
    int value;

    if (top == -1)
    {
        printf("\n----Stack Underflow----\n");
    }

    else
    {
        value = stack[top];
        top = top - 1;

        printf("%d", value);
    }
}

// Function Definition For Pop Operation

void Display()
{
    int i;

    if (top == -1)
    {
        printf("\n----Stack Is Underflow \n");
    }

    printf("\n----Stack Elements are Below : \n");

    for (i = top; i >=0; i--)
    {
        printf("\n Elemets = %d \n ", stack[i]);
    }
}

// Function Definition For Pop Operation

void Peek()
{
    if (top == -1)
    {
        printf("\n----Stack Is Empty----\n");
    }

    else
    {
        printf("\n Peeked Element = %d", stack[top]);
    }
}

void Peep()
{
    int k,i;

    if(top == -1)
    {
        printf("\n----Stack Is Underflow----\n");
    }

    else
    {
        printf("\n Enter Your Peep Elemets : ");
            scanf("%d",&k);
    }

    if(k>top+1)
    {
        printf("\n--Peep Is Not Found !--");
    }
    else
    {
        printf(" Peeped Elements %d : ",stack[top-k+1]);
    }

}

void Top_to_Bottom()
{
    int i;

    for (i = top; i >=0; i--)
    {
        printf("\n Elemets = %d \n ", stack[i]);
    }
}

void Bottom_to_top()
{
    int i;
    
    for (i = 0; i<top; i++)
    {
        printf("\n Elemets = %d \n ", stack[i]);
    }
}



int main()
{
    int ch, size, value;

    printf("Enter Size Of Stack : ");
    scanf("%d", &size);

    // menu:

menu:

    printf("\n 1. Push\n");
    printf(" 2. Pop\n");
    printf(" 3. Display\n");
    printf(" 4. Peek\n");
    printf(" 5. Peep\n");
    printf(" 6. Top_to_Bottom\n");
    printf(" 7. Bottom_to_top\n");
    printf(" 8. Exit !...\n");

    // input choice from user

    printf("\n Enter Your Choice : ");
    scanf("%d", &ch);

    // switch case

    switch (ch)
    {
    case 1:

        printf("\nEnter Element To be Pushed: ");
        scanf("%d", &value);
        Push(value, size);
        Display();
       
       goto menu;

    case 2:

        Pop();
        goto menu;

    case 3:

        Display();
        goto menu;

    case 4:

        Peek();
        goto menu;

    case 5:

        Peep();
        
        goto menu;

    case 6:
        Top_to_Bottom();

        goto menu;

    case 7:

        Bottom_to_top();

        goto menu;
    case 8:

        printf("Exit The Program Thank you !...");

    default:

        printf(" Please Enter The Valid Choice : ");
    }

    return 0;
}

