#include<stdio.h>
int main()
{
   printf("Enter the marks of student : ");
   int marks=0;
   scanf("%d",&marks);

   if(marks>=85 && marks==100)
   {
       printf("you got grade A");
   }
   else if(marks>=70 && marks<85)
   {
       printf("you got grade B");
   }
    else if(marks>=55 && marks<70)
   {
       printf("you got grade C");
   }
    else if(marks>=40 && marks<55)
   {
       printf("you got grade D");
   }
    else
   {
       printf("you got grade F");
   }
    return 0;
}
