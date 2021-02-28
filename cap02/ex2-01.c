#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{


    printf("INT\t\t %20d %20d\n", INT_MIN, INT_MAX);
    printf("LONG\t\t %20ld %20ld\n", LONG_MIN, LONG_MAX);
    printf("SHRT\t\t %20d %20d\n", SHRT_MIN, SHRT_MAX);
    printf("SCHAR\t\t %20d %20d\n", SCHAR_MIN, SCHAR_MAX); 
    printf("UCHAR\t\t %41d\n", UCHAR_MAX);
    printf("FLT\t\t %20e %20e\n", FLT_MIN, FLT_MAX);
    printf("DBL\t\t %20e %20e\n", DBL_MIN, DBL_MAX);
    printf("--------------------------------------------------------------------------------------------------\n");

    return 0;
}