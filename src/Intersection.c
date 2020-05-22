#include <math.h>
#include <stdlib.h>

int Intersection(double x1, double y1, double x2, double y2, float r1, float r2) 
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (d == 0 && r1 == r2) {
        return 1;
    } else if (d > r1 + r2) {
        return 1;
    } else if (d < abs(r1 - r2)) {
        return 1;    
    } else 
        return 0;
}
