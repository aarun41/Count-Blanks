#include <stdio.h>

int main(void) {
    int c;
    int n = 0;

    while ((c = getchar()) != EOF) {
        if ((c == '\n') || (c == '\t') || (c == ' ')) {
            n++;
        }
    }

    printf("%d\n", n);
    return -1;
}