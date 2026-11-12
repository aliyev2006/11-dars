#include <stdio.h>

int main() {
    int n, r;
    int soni = 0, juft = 0, toq = 0, yigindi = 0;
    printf("Son: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        soni++;
        yigindi += r;
        if (r % 2 == 0)
            juft++;
        else
            toq++;
        n /= 10;
    }
    printf("Raqamlar soni: %d\n", soni);
    printf("Juft raqamlar: %d ta\n", juft);
    printf("Toq raqamlar: %d ta\n", toq);
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}
