#include <stdio.h>
#include <string.h>
#define p 3.14

figure(char name[]){
    if(strncmp(name,"circle",6)){
        return 0;
    }
    else 
    return 1;
}

Ploshad(float r){
    if(r <= 0){
        printf("Error");
        return 0;
    }
    else
    float S = p * r * r;
    return S;
}

Perimetr(float r){
    if(r <= 0){
        printf("Error");
        return 0;
    }
    else
    float P = 2 * p * r;
    return P;
}