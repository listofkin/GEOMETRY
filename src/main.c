#include "Intersection.h"
#include "geometry.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    float r1, r2;
    float S1, P1, S2, P2;
    double x1, y1, x2, y2;
    char name[30];
    int e1, e2, e3, e4;
    cout << "Название фигуры " << endl;
    scanf("%s", name);
    if (figure(name) == 0) {
        cout << "Координаты окружности: " << endl;
        cin >> x1 >> y1;
        if (x1 != (int)x1 || y1 != (int)y1) {
            cout << "Координаты должны быть целыми! " << endl;
            return 0;
        }
        printf("Радиус: ");
        cin >> r1;
        e1 = Ploshad(r1);
        if (e1 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            S1 = Ploshad(r1);
        e2 = Perimetr(r1);
        if (e2 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            P1 = Perimetr(r1);
        cout << "Координаты окружности: " << endl;
        cin >> x2 >> y2;
        if (x2 != (int)x2 || y2 != (int)y2) {
            cout << "Координаты должны быть целыми! " << endl;
            return 0;
        }
        printf("Радиус: ");
        cin >> r2;
        e3 = Ploshad(r2);
        if (e3 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            S2 = Ploshad(r2);
        e4 = Perimetr(r2);
        if (e4 == 1) {
            cout << "Неверный радиус " << endl;
            return 0;
        } else
            
            P2 = Perimetr(r2);    
    } else {
        cout << "Error. Incorrect data entered. " << endl;
        return 0;
    }
    cout << name << "( " << x1 << " " << y1 << " " << r1 << ")" << endl;
    cout << "Ploshad " << S1 << endl;
    cout << "Perimetr " << P1 << endl << endl;
    cout << name << "( " << x2 << " " << y2 << " " << r2 << ")" << endl;
    cout << "Ploshad " << S2 << endl;
    cout << "Perimetr " << P2 << endl;

    int peres = Intersection(x1, y1, x2, y2, r1, r2);
    if (peres == 0) {
        cout << "Окружности пересекаются " << endl;
    } else
        cout << "Окружности не пересекаются " << endl;
    return 0;
}