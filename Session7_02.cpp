#include <stdio.h>
int main() {
    int array[5];
    printf("nhap 5 so nguyen:\n");
    for(int i = 0; i < 5; i++) {
        printf("so thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("cac so trong mang la:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

