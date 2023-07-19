//LAB_2 code version 1.

#include "mbed.h"
//Decalres variables of integer type
int max_term = 10;
int term_1= 0;
int term_2= 1;
int next_term = 0;
int main() // main() runs in its own thread in the OS
{
printf("LAB_2 Program \r\n");
for (int i=1; i<max_term; i++){ // Loops until i is less than set max_term
if (i==1)
printf("%d,",term_1); //Prints term_1
if (i==2)
printf("%d,",term_2); //Prints term_2
else{ // adds up 3rd term ++ previous term
next_term = term_1 + term_2; 
term_1=term_2;
term_2=next_term; printf("%d,", next_term); //prints result on serial teraterm interface
}
}
printf("\r\n");
}