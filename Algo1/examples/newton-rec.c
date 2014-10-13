#include <stdio.h>
#include <math.h>

float newton(float);
float newton_helper(float, float);
float my_abs(float);
float newton_rec(float, float);

int main (void) {
    printf("Donner un nombre: ");
    float f;
    scanf("%f", &f);

    printf("La racine caree de %f est %f (sqrt = %f)\n", f, newton(f), sqrtf(f));

    return 0;
}

const float PRECISION = 0.00001;

float newton(float f) {
    return newton_rec(1, f);
}

float newton_rec(float un, float f) {
    float un_1 = newton_helper(un, f);
    if (my_abs(un_1 - un) > PRECISION) {
        return newton_rec(un_1, f);
    } else {
        return un_1;
    }
}

float newton_helper(float un, float a) {
    return (un + (a / un)) / 2;
}

float my_abs(float a) {
    return a < 0 ? -a : a;
}
