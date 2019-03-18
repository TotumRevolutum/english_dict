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
    return f;
}