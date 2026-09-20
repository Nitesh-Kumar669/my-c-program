#include<stdio.h>
int main(){
int trans;
char acc;

printf("*****Enter Account Type*****\n");
printf("1 for Savings\n");
printf("2 for Current\n");
scanf(" %c",&acc);

switch (acc)
{
   
case '1':
     printf("Enter Transaction:\n");
    printf("1 for Deposit\n");

    printf("2 for Withdraw\n");
    printf("3 for Check Balance\n");
    scanf("%d",&trans);

switch (trans)
{
case 1 :
     printf("Despsiting money in Savings account");
    break;


    case 2 :
     printf("Withdrawing money from Savings account");
    break;


    case 3 :
     printf("Checking balance of Savings account");
    break;

default:
printf("Invalid input");
    break;
}

break;
    case '2':
    switch (trans)
{
case 1 :
     printf("Despsiting money in current account");
    break;


    case 2 :
     printf("Withdrawing money from current account");
    break;


    case 3 :
     printf("Checking balance of current account");
    break;

default:
printf("Invalid input");
    break;
}
    

default:
printf("Invalid input");
    break;
}

    return 0;
}