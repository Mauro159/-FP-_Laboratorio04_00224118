#include <stdio.h>
int main() {
   int num1, num2,num3;
   printf("Ingrese 3 numeros: \n");
   scanf("%d%d%d", &num1, &num2, &num3);
   if((num1 % num2 == 0) && (num2!=0))
   {
      printf("%d es Divisible entre %d\n",num1,num2);
   }else{
      printf("%d NO es Divisible entre %d\n",num2, num1);
      
   }
    if((num1 % num3 == 0) && (num3!=0))
   {
      printf("%d es Divisible entre %d\n",num1,num3);
   }else{
      printf("%d NO es Divisible entre %d\n",num1, num3);
  }
  if((num2 % num1 == 0) && (num1!=0))
   {
      printf("%d es Divisible entre %d\n",num2,num1);
   }else{
      printf("%d NO es Divisible entre %d\n",num2, num1);
      
   }
 if((num2 % num3 == 0) && (num3!=0))
   {
      printf("%d es Divisible entre %d\n",num2,num3);
   }else{
      printf("%d NO es Divisible entre %d\n",num2, num3);
      
   }
   if((num3 % num1 == 0) && (num1!=0))
   {
      printf("%d es Divisible entre %d\n",num3,num1);
   }else{
      printf("%d NO es Divisible entre %d\n",num3, num1);
      
   }
   if((num3 % num2 == 0) && (num2!=0))
   {
      printf("%d es Divisible entre %d\n",num3,num2);
   }else{
      printf("%d NO es Divisible entre %d\n",num3, num2);
      
   }
   return 0;
   }
