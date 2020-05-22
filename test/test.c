#include "Intersection.h"
#include "geometry.h"
#include "ctest.h"

CTEST(good_name, its_circle){
    char name1[] = "circle";
    int k1 = figure(name1);
    ASSERT_EQUAL(0, k1);
    char name2[] = "circle";
    int k2 = figure(name2);
    ASSERT_EQUAL(0, k2);
}

CTEST(bad_name, its_not_circle){
    char name1[] = "aaaaaaaaaa";
    int k1 = figure(name1);
    ASSERT_EQUAL(1, k1);
    char name2[] = "triangle";
    int k2 = figure(name2);
    ASSERT_EQUAL(1, k2);
    char name3[] = "";
    int k3 = figure(name3);
    ASSERT_EQUAL(1, k3);
    char name4[] = "  ";
    int k4 = figure(name4);
    ASSERT_EQUAL(1, k4);
    char name5[] = "48e4";
    int k5 = figure(name5);
    ASSERT_EQUAL(1, k5); 
}

CTEST(that_intersection, intersection){
    int res1 = Intersection(2, 3, 2, 4, 3, 5);
    ASSERT_EQUAL(1, res1);
    int res2 = Intersection(-2, 0, 1, 2, 5, 5);
    ASSERT_EQUAL(0, res2);
}

CTEST(good_radius, geometry){
    int res1_1 = Ploshad(3);
    int res1_2 = Perimetr(3);
    ASSERT_EQUAL(0, res1_1);
    ASSERT_EQUAL(0, res1_2);
}

CTEST(bad_radius, geometry){
    int res1_1 = Ploshad(-5);
    int res1_2 = Perimetr(-5);
    ASSERT_EQUAL(1, res1_1);
    ASSERT_EQUAL(1, res1_2);
    int res2_1 = Ploshad(0);
    int res2_2 = Perimetr(0);
    ASSERT_EQUAL(1, res2_1);
    ASSERT_EQUAL(1, res2_2);
}