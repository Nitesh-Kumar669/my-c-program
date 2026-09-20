#include<stdio.h>
int main(){
char ped,light;

printf("Enter Light Color(R for Red,Y for Yellow,G for Green)\n");
scanf(" %c",&light);

switch(light)
{
    
case 'R':
printf("Enter pedestrian (Yes/No)");
    scanf(" %c",&ped);

    switch (ped)
    {
    case 'Y':
        printf("Stop and Cross");
        break;
        case 'N':
         printf("Stop and Wait");
        break;
    
    
    default:
        break;
    }
    
    break;





    case 'Y':
      printf("Slow down and Wait");
    break;





    case 'G':
     switch (ped)
    {
    case 'Y':
         printf("Go and watch for Pedestrians");
        break;
        case 'N':
         printf("Go");
        break;
    
    
    default:
        break;
    }
    break;

default:
    break;
}
    return 0;
}