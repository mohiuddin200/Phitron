#include <stdio.h>

int main() {
    int count = 5;

    do {
        printf("Count is: %d\n", count);
        count++;
    } while (count < 5);

    return 0;
}