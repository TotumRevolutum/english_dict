#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict_lib.c"
#include "defs.c"

int main() {
    char level[2];
    char buf[50];
    int r = rand() % 99;
    int number, start = 0;
    struct en_d *dictionary = NULL;
    struct en_d *cur;
    struct en_d *tmp;
    cur = dictionary;
    FILE *f;

    line(44);
    printf("|         Добро пожаловать в EnLang        |\n");
    printf("|            Your English level is         |\n");
    printf("|               A1 A2 B1 B2 C1             |\n");
    line(44);
    scanf("%s", level);
    f = find(level);

    while (fscanf (f, "%s", buf) == 1){
        //printf("%s\n", buf);
        add(&cur, buf, &start);
        while ((strcmp(buf, "#")) != 0){
            fscanf (f, "%s", buf);
        }
        if (start != 1) cur = cur->next;
    }
    line(44);
    printf("|How many words would you like to practice?|\n");
    line(44);
    scanf("%d", &number);
    for (int i = 0; i < number; i++){
        for (int j = 0; j < r; j++){
            tmp = dictionary->next;
        }
        printf("%s\n", tmp->key);
        r = rand() % 90;
    }

    return 0;
}