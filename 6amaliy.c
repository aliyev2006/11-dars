#include <stdio.h>

int main() {
    int tanlov, miqdor, hisob = 0;
    while (1) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                printf("Miqdori: ");
                scanf("%d", &miqdor);
                hisob += 5000 * miqdor;
                break;
            case 2:
                printf("Miqdori: ");
                scanf("%d", &miqdor);
                hisob += 12000 * miqdor;
                break;
            case 3:
                printf("Miqdori: ");
                scanf("%d", &miqdor);
                hisob += 10000 * miqdor;
                break;
            case 4:
                printf("Joriy hisob: %d so'm\n", hisob);
                break;
            case 5:
                printf("Yakuniy hisob: %d so'm\n", hisob);
                return 0;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
}
