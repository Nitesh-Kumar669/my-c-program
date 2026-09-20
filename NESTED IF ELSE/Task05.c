#include<stdio.h>

int main()
{
 int a,b,c;

 printf("Enter 3 sides: ");
 scanf("%d %d %d",&a,&b,&c);

 if(a+b>c)
 {
  if(a+c>b)
  {
   if(b+c>a)
   {
    if(a==b)
    {
     if(b==c)
      printf("Equilateral");
     else
      printf("Isosceles");
    }
    else
    {
     if(a==c)
      printf("Isosceles");
     else
     {
      if(b==c)
       printf("Isosceles");
      else printf("Scalene");
     }
    }
   }
   else printf("Not a valid triangle");
  }
  else
    printf("Not a valid triangle");
 }
 else
 {
    printf("Not a valid triangle");
 }

 return 0;
}