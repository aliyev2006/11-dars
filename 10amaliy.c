#include <stdio.h>

int main() {
    int tanlov, son;
    int soni = 0, yigindi = 0, eng_katta = 0, eng_kichik = 0;
    while (1) {
        printf("\n1. Son kiritish\n");
        printf("2. Kiritilgan sonlar sonini ko'rish\n");
        printf("3. Sonlar yig'indisini ko'rish\n");
        printf("4. Eng katta sonni ko'rish\n");
        printf("5. Eng kichik sonni ko'rish\n");
        printf("6. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                printf("Son: ");
                scanf("%d", &son);
                if (soni == 0) {
                    eng_katta = son;
                    eng_kichik = son;
                } else {
                    if (son > eng_katta) eng_katta = son;
                    if (son < eng_kichik) eng_kichik = son;
                }
                soni++;
                yigindi += son;
                break;
            case 2:
                if (soni == 0) printf("Hali son kiritilmagan!\n");
                else printf("Sonlar soni: %d\n", soni);
                break;
            case 3:
                if (soni == 0) printf("Hali son kiritilmagan!\n");
                else printf("Yig'indi: %d\n", yigindi);
                break;
            case 4:
                if (soni == 0) printf("Hali son kiritilmagan!\n");
                else printf("Eng katta son: %d\n", eng_katta);
                break;
            case 5:
                if (soni == 0) printf("Hali son kiritilmagan!\n");
                else printf("Eng kichik son: %d\n", eng_kichik);
                break;
            case 6:
                return 0;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
}
