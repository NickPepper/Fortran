/*
see https://gcc.gnu.org/wiki/GFortranGettingStarted

gfortran -c fprog.f90
gcc -c -fno-leading-underscore csub.c
gfortran fprog.o csub.o -o fprog

*/

#include <stdio.h>

void c_sub_(char *str, int *i, float *r, int j[], int str_len) {
    printf("%s %d %d %f %d %d\n", str, str_len, *i, *r, j[0], j[1]);
}
