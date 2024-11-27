#include <stdio.h>
int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }
    printf("do dai cua mang la: %d\n", length);
    return 0;
}

