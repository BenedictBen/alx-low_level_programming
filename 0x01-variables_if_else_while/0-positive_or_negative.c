#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */

/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)
  
/* Most important part of the program!  */
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  
  /* between the braces is the body of the if statement */
  
  if (n > 0)
    
    {
      
      printf("%i is positive\n", n);
      
    }
  
  /* between the braces is the body of the else if statement */
  
  else if (n == 0)
    
    {
      
      printf("%i is zero\n", n);
      
    }
  
  /* between the braces is the body of the else if statement */
  
  else if (n < 0)
    
    {
      
      printf("%i is negative\n", n);
      
    }
  

  
  return (0);
  
}
