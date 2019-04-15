#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dict_lib.c"
#include "defs.c"

int main() {
    srand(time(NULL));
    int r = rand() % 100;
    double number, score = 0;
    double perc = 0;
    struct en_d *dictionary = NULL;
    struct en_d *cur;
    struct definition * a = NULL;
    cur = dictionary;

    line(44);
    printf("|         Добро пожаловать в EngLan        |\n");
    printf("|            Your English level is         |\n");
    printf("|               A1 A2 B1 B2 C1             |\n");
    line(44);
    open_level(&dictionary, &a, &cur);
    while (dictionary->val->next != NULL){
        dictionary->val = dictionary->val->next;
    }
    line(44);
    printf("|How many words would you like to practice?|\n");
    line(44);
    scanf("%lf", &number);
    print_words(number, dictionary, &score, r);
    perc = score / number * 100;
    printf("|How many words would you like to practice?|\n");
    printf("|          You got %lf %%           |\n", perc);
    return 0;
}