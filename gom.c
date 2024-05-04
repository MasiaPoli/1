#include "gom.h"
double* mr(double* a, size_t n, double x)
{
    double* b=a+n;
    for(double* i=a; i!=b; i++)
    {
        if(*i>x)
        {
            return i;
        }
    }
    return NULL;
}
