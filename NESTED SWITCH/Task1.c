
#include<stdio.h>
#include<math.h>

int main()
{
    float num1,num2,sum,mul,div,diff,result;
    int mode;
    char op,sq;

    printf("Enter your numbers:\n");
    scanf("%f %f",&num1,&num2);

    printf("Enter Mode:\n");
    scanf("%d",&mode);

    switch(mode)
    {
        case 1:
            printf("Enter Arthematic Operator(+,-,*,/):\n");

            scanf(" %c",&op);
             printf("Enter your numbers:\n");
    scanf("%f %f",&num1,&num2);

     switch(op)
     {
         case '+':
          sum=num1+num2;
          printf("The sum is:%f\n",sum);
             break;


          case '-':
           diff=num1-num2;
          printf("The difference is:%f\n",diff);


            break;


         case '*':
         mul=num1*num2;
         printf("The multiplication is:%f\n",mul);


              break;

          case '/':
           div=num1/num2;
              printf("The division is:%f\n",div);
                  break;

          default:


             printf("Invalid Input");
                    break;
            }

            break;

        case 2:
          printf("Enter a number:\n");
            scanf("%f",&num1);

            printf("Enter S for square and R for root:\n");
            scanf(" %c",&sq);

            switch(sq)
            {
         case 'S':
         case 's':
            result=num1*num1;
              printf("The square is:%f\n",result);
              break;

        case 'R':
        case 'r':
             result=sqrt(num1);
            printf("The root is:%f\n",result);
             break;

            default:
                printf("Invalid Input");
                 break;
            }

            break;

        default:
            printf("Invalid Input");
            break;
    }

    return 0;
}


