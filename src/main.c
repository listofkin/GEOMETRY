#include "geometry.h"
#include <stdio.h>

int main()
{
    float r, S, P;
    int x = 0, y = 0;
    char name[30];
    printf("Enter a shape name \n");
    scanf("%s", name);
    if (figure(name) == 0) {
        printf("Enter coordinates: ");
        scanf("%d %d", &x, &y);
        printf("Radius: ");
        scanf("%f", &r);
        S = Ploshad(r);
        P = Perimetr(r);
    } else {
        printf("Error. Incorrect data entered.\n");
        return 0;
    }
    printf("%s(%d %d %.2f)\n", name, x, y, r);
    printf("Ploshad = %.2f\n", S);
    printf("Perimetr = %.2f\n", P);
    return 0;
}