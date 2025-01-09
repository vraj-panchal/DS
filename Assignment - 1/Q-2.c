#include<stdio.h>
#include<string.h>


int main()
{

    int n;

        printf("Enter The String Size : ");
            scanf("%d",&n);

            char str[n];

                printf("Enter The String : ");
                    scanf("%s",str);

                int i=0,length=0;

                    while(str[i]!='\0')
                    {
                        length++;
                        
                        i++;
                    }

                    printf("Your String : %s",str);

                    printf("\nYour String Size : %d",length);


}