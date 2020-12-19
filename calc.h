#ifndef CALC_H
#define CALC_H

typedef struct {
    int x;
    int y;
} Calc;

int Calc_mul(Calc * const me, int x, int y);
int Calc_add(Calc * const me, int x, int y);
int Calc_getX(Calc * const me);
int Calc_getY(Calc * const me);

#endif