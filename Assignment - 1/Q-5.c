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

    for (int i = 0; i < n; i++)
    {
        printf("\n--Enter The Student Roll No : ");
            scanf("%d",&s1[i].roll_no);

        printf("--Enter The Student Name : ");
            scanf("%s",s1[i].name);

        printf("--Enter The Student SGPA : ");
            scanf("%f",&s1[i].SGPA);
    }

        printf("\n---Student Detailas.....\n");

        printf("\nRoll No\t Name\t SGPA");

    for (int i = 0; i < n; i++)
    {
        /* code */

        printf("\n%d\t %s\t %f\t",s1[i].roll_no,s1[i].name,s1[i].SGPA);

        
    }


        struct student temp;
        
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s1[i].SGPA < s1[j].SGPA) {
                temp = s1[j];
                s1[j] = s1[i];
                s1[i] = temp;
            }
        }
    }

    // Display student details after sorting
  
        printf("\n\nDescending Order of Their SGPA :");

        printf("\n---Student Detailas.....\n");

        printf("\nRoll No\t Name\t SGPA");


    for (int i = 0; i < n; i++) {
        printf("\n%d\t%s\t%f\n", s1[i].roll_no, s1[i].name, s1[i].SGPA);
    }

         
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s1[i].SGPA > s1[j].SGPA) {
                temp = s1[j];
                s1[j] = s1[i];
                s1[i] = temp;
            }
        }
    }

    // Display student details after sorting
  
        printf("\n\nDescending Order of Their SGPA :");

        printf("\n---Student Detailas.....\n");

        printf("\nRoll No\t Name\t SGPA");


    for (int i = 0; i < n; i++) {
        printf("\n%d\t%s\t%f\n", s1[i].roll_no, s1[i].name, s1[i].SGPA);
    }

}
