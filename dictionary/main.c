#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict_lib.c"

void line(int n){
    for (int i = 0; i < n; i++){
        printf("_");
    }
    printf("\n");
}
int main() {
    char level[2];
    int r = rand() % 99;
    FILE *f;
    line(44);
    printf("|         Добро пожаловать в EnLang        |\n");
    printf("|            Your English level is         |\n");
    printf("|               A1 A2 B1 B2 C1             |\n");
    line(44);
    scanf("%s", level);
    if (strcmp(level, "A1")){
        f = fopen("A1.txt", "r");
    }else{
        if (strcmp(level, "A2")){
            f = fopen("A2.txt", "r");
        }else{
            if (strcmp(level, "B1")){
                f = fopen("B1.txt", "r");
            }else{
                if (strcmp(level, "B2")){
                    f = fopen("B2.txt", "r");
                }else{
                        f = fopen("C1.txt", "r");
                }
            }
        }
    }
    line(44);
    printf("|How many words would you like to practice?|\n");
    line(44);
    return 0;
}