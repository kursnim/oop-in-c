#include "calc.h"

void Calc_set(Calc *const self, int x, int y)
{
    self->x = x;
    self->y = y;
}

int Calc_getX(Calc *const self)
{
    return self->x;
}

int Calc_getY(Calc *const self)
{
    return self->y;
}
