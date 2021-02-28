#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    
    printf("TYPE\t\t\t\t MIN\t\t\t MAX\n");
    printf("------------------------------------------------------------\n");
    printf("INT\t\t%20d\t%20d\n", INT_MIN, INT_MAX);
    printf("LONG\t\t%20ld\t%20ld\n", LONG_MIN, LONG_MAX);
    printf("SHRT\t\t%20d\t%20d\n", SHRT_MIN, SHRT_MAX);
    printf("SCHAR\t\t%20d\t%20d\n", SCHAR_MIN, SCHAR_MAX);    // = CHAR_MIN
    printf("UCHAR\t\t\t\t   0\t%20d\n", UCHAR_MAX);
    printf("FLT\t\t%20e\t%20e\n", FLT_MIN, FLT_MAX);
    printf("DBL\t\t%20e\t%20e\n", DBL_MIN, DBL_MAX);
    return 0;
}