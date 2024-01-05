#include <stdio.h>

int main(void) {
    int arrayyy[] = {1, 2, 3, 4};

    printf("%p\n", arrayyy);
    printf("%d\n", arrayyy[0]);
    printf("%d\n", 0[arrayyy]);

    return 0;
}
