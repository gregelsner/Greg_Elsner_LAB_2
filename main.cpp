//LAB_2 code version 2.

#include "mbed.h"
 int fib(int n){ //fibonaci function with input integer
if (n==1) // if statement  
 return 0;
if(n==2) // if statement
 return 1;
else // else statement
 return (fib(n-1) + fib(n-2)); //adds up following terms
}
int main() //runs in its own thread in the OS
{
 printf("LAB 2 program \r\n"); 
int max_term = 10; // declare maxium term
for(int i=1; i<=max_term; i++){ // Loops until 'i' is less || equal than set max_term
printf("%d, ", fib(i)); // prints function 'fib' input on serial interface
 }
 printf("\r\n");
 }