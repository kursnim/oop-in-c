#include "calc.h"
#include "shape.h"
#include <stdio.h>

typedef struct
{
    struct struct_data
    {
        int x;
        int y;
    } data;

    int (*fp)(int, int);
} tShape;

int Shape_sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    tShape Shape;
    Shape.data.x = 1;
    Shape.data.y = 2;
    Shape.fp = Shape_sum;

    printf("%d %d\n", Shape.data.x, Shape.data.y);
    printf("%d\n", Shape.fp(1, 2));

    // tClassShape s1, s2;
    // tShape a;

    // Shape_set(&s1, 0, 1);
    // Shape_set(&s2, -1, 2);

    // printf("s1 (%d, %d)\n", Shape_getX(&s1));
    // printf("s2 (%d, %d)\n", Shape_getX(&s2));

    // Shape_moveBy(&s1, 2, -4);
    // Shape_moveBy(&s2, 2, -4);

    // printf("s1 (%d, %d)\n", Shape_getX(&s1));
    // printf("s2 (%d, %d)\n", Shape_getX(&s2));

    printf("hello~\n");

    return 0;
}
