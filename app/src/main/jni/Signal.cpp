#include "Signal.h"
#include <cmath>

double Signal::norm(double signal1[], int long1)
{
    int n=0.0;

    for (int i = 0; i < long1; i++)
    {
        n=n+signal1[i]*signal1[i];
    }
    return sqrt(n);
}
