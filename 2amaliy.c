#include <stdio.h>

int main() {
    int i, t, issiq = 0;
    for (i = 1; i <= 7; i++) {
        printf("%d-kun harorati: ", i);
        scanf("%d", &t);
        if (t > 30) {
            printf("Issiq\n");
            issiq++;
        } else if (t >= 15) {
            printf("Iliq\n");
        } else {
            printf("Sovuq\n");
        }
    }
    printf("30 dan yuqori kunlar soni: %d\n", issiq);
    return 0;
}
