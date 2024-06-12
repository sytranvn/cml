#include <gsl/gsl_math.h>
#include <stdio.h>
int
main ()
{
  printf ("Hello, world!\n");
  double y = gsl_pow_4 (3.141); /* compute 3.141**4 */
  printf ("%f - - - \n", y);
  return 0;
}
