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
        f = fopen("levels/A1.txt", "r");
    }else{
        if (strcmp(level, "A2")){
            f = fopen("levels/A2.txt", "r");
        }else{
            if (strcmp(level, "B1")){
                f = fopen("levels/B1.txt", "r");
            }else{
                if (strcmp(level, "B2")){
                    f = fopen("levels/B2.txt", "r");
                }else{
                    f = fopen("levels/C1.txt", "r");
                }
            }
        }
    }
    return f;
}