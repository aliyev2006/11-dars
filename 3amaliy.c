#include <stdio.h>

int main() {
    int n, yigindi = 0;
    printf("Son: ");
    scanf("%d", &n);
    while (n > 0) {
        yigindi += n % 10;
        n /= 10;
    }
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}
