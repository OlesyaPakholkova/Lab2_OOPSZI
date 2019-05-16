#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double task2(double x)
{
if (x<=3)
    return (pow(x,2)-3*x+9);
else
    return (1/(pow(x,3)+6));
}
