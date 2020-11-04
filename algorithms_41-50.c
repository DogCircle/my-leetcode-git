#include <stdio.h>
#include <stdlib.h>

#include "includes.h"

double myPow(double x, int n){
    int i;
    double ret;
    
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    
    if (n & 0x1 && n < 0)
        i = (n + 1) / 2;
    else if (n & 0x1 && n > 0)
        i = (n - 1) / 2;
    else
        i = n / 2;
        
    ret = myPow(x, i);
    
    if (n & 0x1 && n < 0)
        return ret * ret * (1 / x);
    else if (n & 0x1 && n > 0)
        return ret * ret * x;
    else
        return ret * ret;
}

void func50(void) {
    printf("%0.5f\n", myPow(2.0, 10));
    printf("%0.5f\n", myPow(2.1, 3));
    printf("%0.5f\n", myPow(2.0, -2));
}
