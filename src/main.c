#include "geometry.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    float r;
    float S, P;
    double x, y;
    char name[30];
    int e1, e2;
    cout << "Название фигуры " << endl;
    scanf("%s", name);
    if (figure(name) == 0) {
        cout << "Координаты окружности: " << endl;
        cin >> x >> y;
        if (x != (int)x || y != (int)y) {
            cout << "Координаты должны быть целыми! " << endl;
            return 0;
        }
        printf("Радиус: ");
        cin >> r;
        e1 = Ploshad(r);
        if (e1 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            S = Ploshad(r);
        e2 = Perimetr(r);
        if (e2 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            P = Perimetr(r);
    } else {
        cout << "Error. Incorrect data entered. " << endl;
        return 0;
    }
    cout << name << "( " << x << " " << y << " " << r << ")" << endl;
    cout << "Ploshad " << S << endl;
    cout << "Perimetr " << P << endl;
    return 0;
}