#include "week_1.h"

void func() {
    int height = 10;

    for (int h = 1; h < height; h++) {
        for (int x = 0; x < h; x++) printf("*");
        printf("\n");
    }
}