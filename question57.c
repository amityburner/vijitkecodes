#include <stdio.h>


int main()
{
 int a,b;
 int option;
 //clrscr();
 printf("**********MENU*******\n");
 printf("Enter 1 for addition\n");
 printf("Enter 2 for subtraction\n");
 printf("Enter 3 for multiplication\n");
 printf("Enter 4 for division\n");
 scanf("%d",&option);

 switch (option)
 {
 case 1: {
 add(a,b);
 break;
 }
 case 2: {
 subtract(a,b);
 break;
 }
 case 3: {
 multiply(a,b);
 break;
 }
 }//switch
 return 0;
} //main()


//addition
int add(a,b)
{
 printf("enter a: \n");
 scanf("%d",&a);
 printf("Enter b: \n");
 scanf("%d",&b);
 c=(a+b);
 printf("Answer %d",c);
 return 0;
}


//subtraction
int subtract(a,b)
{
printf("ENter a: \n");
scanf("%d",&a);
printf("Enter b: \n");
scanf("%d",&b);
c=(a-b);
printf("The answer is %d",c);
return 0;
}