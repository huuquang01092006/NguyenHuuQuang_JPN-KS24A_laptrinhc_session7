#include <stdio.h>
int main() {
    int array[5] = {1, 7, 3, 9, 5}; 
    int chan = 0;
    printf("cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            chan = 1;
        }
    }
    if (!chan) {
        printf("mang khong co so chan\n");
    } else {
        printf("\n");
    }
    return 0;
}

