#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */

/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)                                /* Most important part of the program!  */
  
{
  
  int n;                                 /* Need a variable... */
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  
  /* between the braces is the body of the if statement */
  
  if (n > 0)                                          /* If n is greater than 0 */
    
    {
      
      printf("%i is positive\n", n);              /* Just to show you it works... */
      
    }
  
  /* between the braces is the body of the else if statement */
  
  else if (n == 0)                                    /* If n is equall to 0 */
    
    {
      
      printf("%i is zero\n", n);                  /* Just to show you it works... */
      
    }
  
  /* between the braces is the body of the else if statement */
  
  else if (n < 0)                                    /* If n is equall to 0 */
    
    {
      
      printf("%i is negative\n", n);             /* Just to show you it works... */
      
    }
  

  
  return (0);
  
}
