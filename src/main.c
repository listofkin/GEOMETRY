#include "Intersection.h"
#include "geometry.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1, r2;
    float S1, P1, S2, P2;
    int x1, y1, x2, y2;
    char name[30];
    int e1, e2, e3, e4;
    printf("Название фигуры \n");
    scanf("%s", name);
    if (figure(name) == 0) {
        printf("Координаты окружности: \n");
        if (scanf("%d", &x1) != 1) {
            printf("Координаты должны быть целыми! \n");
            return 0;
        }
	    if (scanf("%d", &y1) != 1) {
	    printf("Координаты должны быть целыми! \n");
	    return 0;
	}
        printf("Радиус: ");
        scanf("%f", &r1);
        e1 = Ploshad(r1);
        if (e1 == 1) {
            printf("Неверный радиус \n");
            return 0;
        } else
            S1 = Ploshad(r1);
        e2 = Perimetr(r1);
        if (e2 == 1) {
            printf("Неверный радиус \n");
            return 0;
        } else
            P1 = Perimetr(r1);
        printf("Координаты окружности: \n");
        if (scanf("%d", &x2) != 1) {
            printf("Координаты должны быть целыми! \n");
            return 0;
        }
	    if (scanf("%d", &y2) != 1) {
	    printf("Координаты должны быть целыми!\n");
	    return 0;
	}
        printf("Радиус: ");
        scanf("%f", &r2);
        e3 = Ploshad(r2);
        if (e3 == 1) {
            printf("Неверный радиус \n");
            return 0;
        } else
            S2 = Ploshad(r2);
        e4 = Perimetr(r2);
        if (e4 == 1) {
            printf("Неверный радиус \n");
            return 0;
        } else
            
            P2 = Perimetr(r2);    
    } else {
        printf("Error. Incorrect data entered. \n");
        return 0;
    }
    printf("%s (%d, %d, %f)\n", name, x1, y1, r1);
    printf("Ploshad %0.2f\n", S1);
    printf("Perimetr %0.2f\n\n", P1);
    printf("%s (%d, %d, %f)\n", name, x2, y2, r2);
    printf("Ploshad %0.2f\n", S2);
    printf("Perimetr %0.2f\n", P2);

    int peres = Intersection(x1, y1, x2, y2, r1, r2);
    if (peres == 0) {
        printf("Окружности пересекаются \n");
    } else
        printf("Окружности не пересекаются \n");
    return 0;
}
