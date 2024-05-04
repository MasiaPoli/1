#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "gom.h"
int main()
{
    printf("Write number and array!\n");
    int n;
    scanf("%d", &n);
    double* a;
    a=malloc(1*sizeof(double));
    for(int i=0; i<n; i++)
    {
        double x;
        scanf("%lf", &x);
        a=realloc(a, (i+1)*sizeof(double));
        a[i]=x;
    }
    printf("Write a control number!\n");
    double y;
    scanf("%lf", &y);
    double* k=mr(a, n, y);
    if(k)
    {
         printf("%lf", *k);
    }
    else
    {
         printf("No number!\n");
    }
    return 0;
}
