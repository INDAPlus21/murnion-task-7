#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define min(X, Y) (((X) < (Y)) ? (X) : (Y))

int main() {
    int height, width;

    scanf("%d%d", &height, &width);
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            int tmp = min(min(i, height - i + 1), min(j, width - j + 1));
            if (tmp > 9) {
                printf(".");
            } else {
                printf("%d", tmp);
            }
        }
        printf("\n");
    }
}   