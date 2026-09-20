#include<stdio.h>
int main(){
    int food,item;

    printf("*********ORDER MENU**********\n");
    printf("1 For Beverages\n");
    printf("2 for Main Course\n");
    printf("3 for Desert\n");
    scanf(" %d",&food);

    switch (food)
    {
    case 1:
     printf("Enter item no(1 for Water,2 for Tea,3 for Juice)");
    scanf("%d",&item);
        switch (item)
        {
          
        case 1:
            printf("Price=1200");
            break;

             case 2:
             printf("Price=100");
            break;

             case 3:
             printf("Price=300");
            break;
        
        default:
         printf("Invalid Input");
            break;
        }
        break;
    
    



        case 2:
         
        switch (item)
        {
          
        case 1:
           printf("Price=1500");
            break;

             case 2:
             printf("Price=800");
            break;

             case 3:
             printf("Price=2500");
            break;
        
        default:
         printf("Invalid Input");
            break;
        }
        break;
    
    





        case 3:
        
        switch (item)
        {
            
        case 1:
           printf("Price=200");
            break;

             case 2:
             printf("Price=3000");
            break;

             case 3:
             printf("Price=2000");
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