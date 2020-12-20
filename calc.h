#ifndef CALC_H
#define CALC_H

typedef struct
{
    int x;
    int y;
} Calc;

void Calc_set(Calc *const self, int x, int y);
int Calc_mul(Calc *const self, int x, int y);
int Calc_add(Calc *const self, int x, int y);
int Calc_getX(Calc *const self);
int Calc_getY(Calc *const self);

#endif