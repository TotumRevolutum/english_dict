#include <stdio.h>
#include <stdlib.h>

struct en_d{

};

struct definition{
    char def[33];
    struct definition * prev;
    struct definition * next;
};