#include<stdio.h>

int main()
{
   
   int n;

        printf("\n Enter The Array Size : ");
            scanf("%d",&n);

        int arr[n];
        int *p1;

        for(int i=0 ;i<n ;i++)
        {
            printf("\n Enter Array Elements [%d] : ",i);

                scanf("%d",&arr[i]);
        }

    
        p1=arr;

        int max=0;
        max=*p1;

        for(int i=1 ;i<n; i++)
        {
            p1++;
            if(*p1>max)
            {
                max=*p1;
                
            }
            

        }

        p1=arr;

        int min=0;
        min=*p1;

        for(int i=1 ;i<n; i++)
        {
            p1++;
            if(*p1<min)
            {
                max=*p1;
                
            }
            

        }

        printf("\nThe maximum Value In The Array : %d ",max);
        printf("\nThe Minumum Value In The Array : %d ",min);



        
}