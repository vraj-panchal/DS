#include<stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll_no;
    float SGPA;

};

int main()
{

    int n;

        printf("\n Enter THe Total Studnet  : ");
            scanf("%d",&n);

    struct student s1[n];

    struct student *s2=s1;

    for (int i = 0; i < n; i++)
    {
        printf("\n--Enter The Student Roll No : ");
            scanf("%d",&s2[i+1].roll_no);

        printf("--Enter The Student Name : ");
            scanf("%s",s2[i+1].name);

        printf("--Enter The Student SGPA : ");
            scanf("%f",&s2[i+1].SGPA);
    }

        printf("\n---Student Detailas.....\n");

        printf("\nRoll No\t Name\t SGPA");

    for (int i = 0; i < n; i++)
    {
        /* code */

        printf("\n%d\t %s\t %f\t",s2[i+1].roll_no,s2[i+1].name,s2[i+1].SGPA);

        
    }

    struct student temp;
     
    
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j <n; j++) 
        {
            if ((s2+i)->SGPA < (s2+j)->SGPA) 
            {
                temp = *(s2+j);
                *(s2+j) = *(s2+i);
                *(s2+i) = temp;
            }
        }
    }

    // Display student details after sorting
  
        printf("\n\nDescending Order of Their SGPA :");

        printf("\n---Student Detailas.....\n");

        printf("\nRoll No\t Name\t SGPA");


    for (int i = 0; i < n; i++) {
        printf("\n%d\t%s\t%.2f\n", (s2+i)->roll_no, (s2+i)->name, (s2+i)->SGPA);
    }

    return 0;
    

   
    
}
