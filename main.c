#include <stdio.h>
#include "calc.h"
#include "shape.h"

int main(int argc, char const *argv[])
{
    Shape s1, s2;

    Shape_set(&s1, 0, 1);
    Shape_set(&s2, -1, 2);

    printf("s1 (%d, %d)\n", Shape_getX(&s1));
    printf("s2 (%d, %d)\n", Shape_getX(&s2));

    Shape_moveBy(&s1, 2, -4);
    Shape_moveBy(&s2, 2, -4);

    printf("s1 (%d, %d)\n", Shape_getX(&s1));
    printf("s2 (%d, %d)\n", Shape_getX(&s2));

    printf("hello~\n");

    return 0;
}
