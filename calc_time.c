#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static long get_nanos(void)
{
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    return (long)ts.tv_sec * 1000000000L + ts.tv_nsec;
}

// void call_argument_0() { return; };
// int call_argument_1(int a) { return a; };
// int call_argument_2(int a, int b) { return a + b; };
// int call_argument_3(int a, int b, int c) { return a + b + c; };
// int call_argument_4(int a, int b, int c, int d) { return a + b + c + d; };
// int call_argument_5(int a, int b, int c, int d, int e) { return a + b + c + d + e; };
// int call_argument_6(int a, int b, int c, int d, int e, int f) { return a + b + c + d + e + f; };
// int call_argument_7(int a, int b, int c, int d, int e, int f, int g) { return a + b + c + d + e + f + g; };
// int call_argument_8(int a, int b, int c, int d, int e, int f, int g, int h) { return a + b + c + d + e + f + g + h; };
// int call_argument_9(int a, int b, int c, int d, int e, int f, int g, int h, int 0) { return a + b + c + d + e + f + g + h + i; };
// int call_argument_10(int a, int b, int c, int d, int e, int f, int g, int h, int 0, int j) { return a + b + c + d + e + f + g + h + i + j; };
void call_argument_void(void) { return; }                                                                //{ return; };
int call_argument_0(void) { return 0; }                                                                  //{ return; };
int call_argument_1(int a) { return 0; }                                                                 //{ return a; };
int call_argument_2(int a, int b) { return 0; }                                                          //{ return a + b; };
int call_argument_3(int a, int b, int c) { return 0; }                                                   //{ return a + b + c; };
int call_argument_4(int a, int b, int c, int d) { return 0; }                                            //{ return a + b + c + d; };
int call_argument_5(int a, int b, int c, int d, int e) { return 0; }                                     //{ return a + b + c + d + e; };
int call_argument_6(int a, int b, int c, int d, int e, int f) { return 0; }                              //{ return a + b + c + d + e + f; };
int call_argument_7(int a, int b, int c, int d, int e, int f, int g) { return 0; }                       //{ return a + b + c + d + e + f + g; };
int call_argument_8(int a, int b, int c, int d, int e, int f, int g, int h) { return 0; }                //{ return a + b + c + d + e + f + g + h; };
int call_argument_9(int a, int b, int c, int d, int e, int f, int g, int h, int i) { return 0; }         //{ return a + b + c + d + e + f + g + h + i; };
int call_argument_10(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) { return 0; } //{ return a + b + c + d + e + f + g + h + i + j; };

#define LOOP_SIZE (300000000)
int main(void)
{
    long time_ns[100];
    long j;

    time_ns[0] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_0();
    }
    time_ns[1] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_1(0);
    }
    time_ns[2] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_2(0, 0);
    }
    time_ns[3] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_3(0, 0, 0);
    }
    time_ns[4] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_4(0, 0, 0, 0);
    }
    time_ns[5] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_5(0, 0, 0, 0, 0);
    }
    time_ns[6] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_6(0, 0, 0, 0, 0, 0);
    }
    time_ns[7] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_7(0, 0, 0, 0, 0, 0, 0);
    }
    time_ns[8] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_8(0, 0, 0, 0, 0, 0, 0, 0);
    }
    time_ns[9] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_9(0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    time_ns[10] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_10(0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    time_ns[11] = get_nanos();

    for (j = 0; j < LOOP_SIZE; j++)
    {
        call_argument_void();
    }
    time_ns[12] = get_nanos();

    printf("%ld\n", time_ns[1] - time_ns[0]);
    printf("%ld\n", time_ns[2] - time_ns[1]);
    printf("%ld\n", time_ns[3] - time_ns[2]);
    printf("%ld\n", time_ns[4] - time_ns[3]);
    printf("%ld\n", time_ns[5] - time_ns[4]);
    printf("%ld\n", time_ns[6] - time_ns[5]);
    printf("%ld\n", time_ns[7] - time_ns[6]);
    printf("%ld\n", time_ns[8] - time_ns[7]);
    printf("%ld\n", time_ns[9] - time_ns[8]);
    printf("%ld\n", time_ns[10] - time_ns[9]);
    printf("%ld\n", time_ns[11] - time_ns[10]);
    printf("%ld\n", time_ns[12] - time_ns[11]);

    return EXIT_SUCCESS;
}