#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void line(int n){
    for (int i = 0; i < n; i++){
        printf("_");
    }
    printf("\n");
}

FILE *find(char *level){
    FILE *f;
    printf("%d\n", (strcmp(level, "A1")));
    if (strcmp(level, "A1") == 0){
        f = fopen("levels/A1.txt", "r");
    } else {
        if (strcmp(level, "A2") == 0){
            f = fopen("levels/A2.txt", "r");
        } else {
            if (strcmp(level, "B1") == 0){
                f = fopen("levels/B1.txt", "r");
            } else {
                if (strcmp(level, "B2") == 0){
                    f = fopen("levels/B2.txt", "r");
                } else {
                    f = fopen("levels/C1.txt", "r");
                }
            }
        }
    }
    return f;
}

int comparison(struct en_d *dict){
    line(44);
    printf("|     Write down defenition of the word    |\n");
    line(44);
    char def[33];
    scanf("%s", def);
    //printf("%s\n %s\n", def, dict->val->def);
    if (strcmp(dict->val->def, def) == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}