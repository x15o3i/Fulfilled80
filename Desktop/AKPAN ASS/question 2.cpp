#include <stdio.h>
int main()
{
   float num1, num2, result = 0;
   char Operator, again; 
   do
   {
   printf("Enter the first number: ", num1);
   scanf("%f", &num1);
   
   printf("Enter any one operator like +, -, *, / : ");
   scanf(" %c", &Operator);
   
   printf("Enter the second number: ", num2);
   scanf("%f", &num2);
   switch(Operator){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("Invalid Operator ");
}
   printf("\n The result = %f", result);

printf("do you want to perform another operation? (y/n) \n"); 
 	scanf(" %c",&again); 
}while(again =='y' || again =='Y'); 	

   return 0;
}
