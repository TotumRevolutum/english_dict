#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void line(int n){
    for (int i = 0; i < n; i++){
        printf("_");
    }
    printf("\n");
}

int all_in(int *arr, double number){
    int r;
    r = rand() % 100;
    while (1 == 1){
        for (int i = 0; i < number; i++){
            if (arr[i] == r){
                r = rand() % 100;
            }
            else continue;
        }
        break;
    }
    return r;
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

void open_level(struct en_d **dictionary, struct definition **a, struct en_d **cur){
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
            if (strcmp(buf, "#") == 0) break;
            add_def(cur, a, buf, &flag);

        }
    }
}


int comparison(struct en_d *dict){
    line(44);
    printf("|         Write down the definition       |\n");
    line(44);
    char def[33];
    scanf("%s", def);
    while (dict->val != NULL){
        if (abs(strcmp(dict->val->def, def)) <= 1){
            printf("YES\n");
            return 0;
        }
        else{
            printf("possible: %s\n", dict->val->def);
        }
        dict->val = dict->val->next;
    }
    printf("NO\n");
    return 1;
}


int print_words(double number, struct en_d *dictionary, double *score, int r){
    int arr[100];
    for (int i = 0; i < 100; i++) arr[i] = 0;
    int q = 0;
    struct en_d *tmp;
    for (int i = 0; i < number; i++){
        tmp = dictionary;
        for (int j = 0; j < r; j++){
            tmp = tmp->next;
        }
        printf("%s\n", tmp->key);
        if (comparison(tmp) == 0){
            (*score) ++;
        };
        srand(time(NULL));
        r = all_in(arr, number);
        arr[q] = r;
        q++;
    }
    return 0;
}