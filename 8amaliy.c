#include <stdio.h>

int main() {
    int i, baho;
    int a = 0, y = 0, q = 0, qs = 0;
    for (i = 1; i <= 15; i++) {
        printf("%d-o'quvchi bahosi: ", i);
        scanf("%d", &baho);
        if (baho < 0 || baho > 100) {
            printf("Noto'g'ri baho!\n");
            continue;
        }
        if (baho >= 90) {
            printf("A'lo\n");
            a++;
        } else if (baho >= 75) {
            printf("Yaxshi\n");
            y++;
        } else if (baho >= 60) {
            printf("Qoniqarli\n");
            q++;
        } else {
            printf("Qoniqarsiz\n");
            qs++;
        }
    }
    printf("\nA'lo: %d ta\n", a);
    printf("Yaxshi: %d ta\n", y);
    printf("Qoniqarli: %d ta\n", q);
    printf("Qoniqarsiz: %d ta\n", qs);
    return 0;
}
