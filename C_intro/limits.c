#include <stdio.h>
#include <limits.h>
#include <float.h>
// Prints the sizes of data types in bits.

int main()
{
    printf("int_MIN  :   %d\n", INT_MIN);
    printf("int_MAX  :   %d\n", INT_MAX);
    printf("char_MIN :   %i\n", CHAR_MIN);
    printf("char_MAX :   %i\n", CHAR_MAX);
    printf("flt_MIN  :   %f\n", FLT_MIN);
    printf("flt_MAX  :   %f\n", FLT_MAX);
    printf("long_MIN :   %li\n", LONG_MIN);
    printf("long_MAX :   %ld\n", LONG_MAX);
    printf("dbl_MIN  :   %f\n", DBL_MIN);
    printf("dbl_Max  :   %f\n", DBL_MAX);
    printf("shrt_MIN :   %d\n", SHRT_MIN);
    printf("shrt_MAX :   %i\n", SHRT_MAX);

    return 0;
}