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

void open_level(struct en_d **dictionary, struct en_d **cur){
    FILE *f;
    char level[2];
    char buf[50];
    int start = 0, flag = 0;
    scanf("%s", level);
    f = find(level);
    while (fscanf (f, "%s", buf) == 1){
        add_word(cur, buf, &start);
        flag = 0;
        if (start != 1) (*cur) = (*cur)->next;
        else (*dictionary) = (*cur);
        while ((strcmp(buf, "#")) != 0){
            fscanf (f, "%s", buf);
            add_def(cur, buf, &flag);
        }
    }
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
        printf("%s\n", dict->val->def);
    }
    return 0;
}