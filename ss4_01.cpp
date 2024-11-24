#include <stdio.h>
int main() {
    int a;
    printf("so: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("So %d là so duong.\n", a);
    } else if (a < 0) {
        printf("So %d là so am.\n", a);
    } else {
        printf("So 0.\n");
    }

    return 0;
}