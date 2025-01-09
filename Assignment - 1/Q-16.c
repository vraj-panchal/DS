#include<stdio.h>
#include<string.h>

char str1[100];
char str2[100];
char str3[200];

int top1=-1;
int top2=-1;
int top3=-1;

void Push(char ch)
{
    str3[++top3]=ch;

    printf("%c Push Onto Elements \n",ch);
}

char Pop1()
{
    if(top1==-1)
    {
        printf("\nStack Is Underflow");
    }
    else
    {
        return str1[top1--];
    }
}


char Pop2()
{
    if(top2==-1)
    {
        printf("\nStack Is Underflow");
    }
    else
    {
        return str2[top2--];
    }
}

int main()
{
    printf("\n--Enter Your First String : ");
        scanf("%s",str1);

    printf("\n--Enter Your Secound String : ");
        scanf("%s",str2);
        

        for(int i=0 ; str1[i]!='\0'; i++)
        {
            top1++;
        }

        for(int i=0 ; str2[i]!='\0'; i++)
        {
            top2++;
        }

            while(top1!=-1 || top2!=-1)
            {
                if(top1>=0)
                {
                    char ch1=Pop1();

                        Push(ch1);
                }

                if(top2>=0)
                {
                    char ch2=Pop2();

                        Push(ch2);
                }
            }

            str3[++top3]='\0';


                printf("\n---Your Merged string : %s\n",str3);

        return 0;
}
