#include<stdio.h>
int main(){
char dep;
int sem;
printf("Enter your department(C for Computer Science,E for Electrical Engineering,B for Business)");
scanf(" %c",&dep);

printf("Enter your Semester");
scanf("%d",&sem);

switch (dep)
{
case 'C':
    switch (sem)
    {
    case 1:
        printf("Programming Fundamentals");
        break;


     case 2:
         printf("Object Oriented Programming");
        break;

    case 3:
     printf("Data Structures");
        break;
    
    default:
        printf("Invalid Semester");
        break;
    }
    break;

    case 'E':
    switch (sem)
    {
    case 1:
         printf("Basic Electrical Engineering"); 
        break;
         
      case 2:
       printf("Circuit Analysis");
        break;


     case 3:
         printf("Digital Logic Design");
        break;

    
    default:
        printf("Invalid Semester");
        break;
    }
    break;

    case 'B':
        switch (sem)
        {
    case 1:
         printf("Introduction to Business");
        break;


     case 2:
     printf("Principles of Marketing");
        break;
     case 3:
          printf("Financial Accounting");
        break;


    
    default:
        printf("Invalid Semester");
        break;
        }


    break;

default:
    printf("Invalid Department");
    break;


}

    return 0;
}
