#include <studio.h>


int main()
{
    int a = 100;
   int b = 200;
    int c =300;
   int total;
 
   
   total = max(a, b,c);
 
   printf( "Max value is : %d\n", total );
 
   return 0;
}
 

int max(int num1, int num2, int num3) {

   
   int result;
 
   if (num1 > num2){
      result = num1;
   }
  else if(num2 > num3){
      result = num2;
}
else {
    result = num3;
}
 
   return result; 
}
