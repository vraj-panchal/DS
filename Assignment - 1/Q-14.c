#include <stdio.h>

#define MAX 100 // Defining a macro for the maximum size of stack and expression

int top = -1;
char stack[MAX];

// Function to push an element onto the stack
void Push(char value)
{
    if (top == (MAX - 1))
    {
        printf("\n----Stack Overflow----\n");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
    }
}

// Function to pop an element from the stack
char Pop()
{
    if (top == -1)
    {
        printf("\n----Stack Underflow----\n");
        
    }
    else
    {
        return stack[top--];
    }
}

// Function to get the precedence of operators
int Precedence(char value)
{
    switch (value)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

// Function to check if a character is an operand
int IsOperand(char ch)
{
    // Check if character is a letter or a digit
    return (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// Function to convert infix expression to postfix expression
void InfixToPostfix(char infix[], char postfix[])
{
    int i, j = 0;
    char token;

    // Reset stack
    top = -1;

    for (i = 0; infix[i] != '\0'; i++)
    {
        token = infix[i];

        if (IsOperand(token))
        {
            postfix[j++] = token; // Operand
        }
        else if (token == '(')
        {
            Push(token);
        }
        else if (token == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = Pop();
            }
            if (top != -1 && stack[top] == '(')
            {
                Pop(); // Remove '('
            }
          
        }
        else // Operator
        {
            while (top != -1 && stack[top] != '(' && Precedence(stack[top]) >= Precedence(token))
            {
                postfix[j++] = Pop();
            }
            Push(token);
        }
    }

    // Pop all the remaining operators from the stack
    while (top != -1)
    {
        if (stack[top] == '(')
        {
            printf("\n----Mismatched parentheses----\n");
            return; // Exit the function due to error
        }
        postfix[j++] = Pop();
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

int main()
{
    char infix[MAX], postfix[MAX];

    printf("Enter Infix expression: ");
    scanf("%s", infix);

    InfixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
