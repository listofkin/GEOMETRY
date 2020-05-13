#include <string.h>
#define p 3.14
int figure(char name[])
{
    if (strncmp(name, "circle", 6) == 0) {
        return 0;
    } else
        return 1;
}

float Ploshad(float r)
{
    if (r <= 0) {
        return 1;
    }
    float S = p * r * r;
        return S;
}

float Perimetr(float r)
{
    if (r <= 0) {
        return 1;
    }
    float P = 2 * p * r;
        return P;
}