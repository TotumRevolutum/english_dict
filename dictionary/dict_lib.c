#include <stdio.h>
#include <stdlib.h>

struct en_d{
    char key[33];
    struct definition * val;
};

struct definition{
    char def[33];
    struct definition * prev;
    struct definition * next;
};