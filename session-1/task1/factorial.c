
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
    int i = 0; 

    f[0] = 1; 

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for(i = 0 ; i < 20 ; ++i ){
      f[i]=f[i-1]*i; 
   }

   for(i = 0 ; i < 20 ; ++i ){

   printf("%d! = %d\n" , i, f[i]);
   
   }

    return 0;
 }
