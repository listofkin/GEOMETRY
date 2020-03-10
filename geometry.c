#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, y, r, f = 0;
    char st[80];
    char circle[] = "circle";
    fgets(st, 80, stdin);
    if (!(strncmp(st, circle, 6))) {
        f = 1;
        x = st[7];
        y = st[9];
        r = st[11];
    }
    if (f == 0) {
        printf("Error");
    }
    if (f == 1) {
        printf("\n");
        printf("figure: ");
        printf("circle \n");
        printf("coordinaty x = %c , y = %c \n", x, y);
        printf("radius kruga %c", r);
    }
    return 0;
}
