#include <string.h>

int figure(char name[])
{
    if (strncmp(name, "circle", 6) == 0) {
        return 0;
    } else
        return 1;
}

int Ploshad(int r)
{
    if (r <= 0) {
        return 1;
    } else
        return 0;
}

int Perimetr(int r)
{
    if (r <= 0) {
        return 1;
    } else
        return 0;
}