#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int add_word(struct en_d **prev, char *word, int *start){
    struct en_d *cur;
    cur = (struct en_d*) malloc (sizeof(struct en_d));
    if (cur == NULL) {
        printf("parasha");
        return 1;
    }
    strcpy(cur->key, word);
    cur->val = NULL;
    cur->next = NULL;
    if ((*start) != 0) {
        cur->prev = (*prev);
        (*prev)->next = cur;
        *start += 1;
    }
    else{
        *start += 1;
        cur->prev = NULL;
        (*prev) = cur;
    }
    return 0;
}

int add_def(struct en_d **dict, struct definition ** a, char *word, int *flag){
    struct definition *cur;
    cur = (struct definition*) malloc (sizeof(struct definition));
    if (cur == NULL) {
        printf("parasha");
        return 1;
    }
    strcpy(cur->def, word);
    cur->prev = NULL;
    cur->next = NULL;
    if ((*flag) == 0){
        *flag += 1;
        (*dict)->val = cur;
        (*a) = cur;
    }
    else{
        (*a)->next = cur;
        cur->prev = (*a);
        (*a) = cur;
    }
    return 0;
}