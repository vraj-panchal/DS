#include<stdio.h>

int main()
{
    int n ; 

        printf("\nEnter The Array Size : ");
            scanf("%d",&n);

        int a[n];
        int *p1;
        int *p2;

            for(int i=0 ; i<n ; i++)
            {
                printf("\nEnter The Array Value [%d]: ",i);

                    scanf("%d",&a[i]);
            }

        p1=&a[0];
        p2=&a[n-1];

        int i=0;

            while(*p1!=*p2)
            {
                p1++;
                p2--;

                i++;
            }

            printf("\n This Pointer Value And Pointer Same Location : %d %d",*p1,*p2);
        

            printf("\n\n This Pointer Address The Same lovcation : %d %d",p2,p2);
            

        
}