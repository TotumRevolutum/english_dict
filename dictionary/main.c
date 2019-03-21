#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dict_lib.c"
#include "defs.c"

int main() {
    srand(time(NULL));
    int r = rand() % 99;
    double number, score = 0;
    double perc = 0;
    struct en_d *dictionary = NULL;
    struct en_d *cur;
    struct en_d *tmp;
    cur = dictionary;

    line(44);
    printf("|         Добро пожаловать в EnLang        |\n");
    printf("|            Your English level is         |\n");
    printf("|               A1 A2 B1 B2 C1             |\n");
    line(44);
    open_level(&dictionary, &cur);
    line(44);
    printf("|How many words would you like to practice?|\n");
    line(44);
    scanf("%lf", &number);

    for (int i = 0; i < number; i++){
        tmp = dictionary;
        for (int j = 0; j < r; j++){
            tmp = tmp->next;
        }
        printf("%s\n", tmp->key);
        if (comparison(tmp) == 0){
            score ++;
        };
        srand(time(NULL));
        r = rand() % 90;
    }
    perc = score / number * 100;
    printf("|How many words would you like to practice?|\n");
    printf("|          You got %lf %%           |\n", perc);
    return 0;
}