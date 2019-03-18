#include <stdio.h>
#include <stdlib.h>

struct en_d{
    char key[33];
    struct definition * val;
    struct en_d *prev;
    struct en_d *next;
};

struct definition{
    char def[33];
    struct definition * prev;
    struct definition * next;
};