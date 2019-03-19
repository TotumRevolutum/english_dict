#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict_lib.c"
#include "defs.c"

int main() {
    char level[2];
    int r = rand() % 99;
    int number;
    struct en_d dictionary;
    FILE *f;

    line(44);
    printf("|         Добро пожаловать в EnLang        |\n");
    printf("|            Your English level is         |\n");
    printf("|               A1 A2 B1 B2 C1             |\n");
    line(44);
    scanf("%s", level);
    f = find(level);
    line(44);
    printf("|How many words would you like to practice?|\n");
    line(44);
    scanf("%d", &number);
    for (int i = 0; i < number; i++){
        printf("%d\n", r);
        r = rand() % 90;
    }

    return 0;
}