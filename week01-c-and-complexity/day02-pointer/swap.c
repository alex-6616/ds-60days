#include <stdio.h>

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}
