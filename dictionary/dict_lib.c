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

int add(struct en_d *dict, char word){
    struct en_d *cur;
    cur = (struct en_d*) malloc (sizeof(struct en_d));
    cur->key = word;
    cur->right = NULL;
    cur->up = root;
    cur->val = val;
    cur->oper = ' ';
    root->right = cur;
}