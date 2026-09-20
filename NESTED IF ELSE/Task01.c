#include<stdio.h>
int main(){
float marks;

printf("Enter Marks(1-100)\n");
scanf("%f",&marks);

if (marks>=90)
{
    printf("Grade A\n");
    if (marks==100)
    {
        printf("Perfect Score\n");
    }
    
}
else if (marks>=75)
{
    printf("Grade B\n");
}


else if (marks>=60)
{
    printf("Grade C\n");
}

else if (marks>=40)
{
    printf("Grade D\n");
}
else{
     printf("Fail\n");
}
   

return 0;
}