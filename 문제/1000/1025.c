#include <stdio.h>
int main() {
    int a;
    short b = 10000;
    scanf("%d", &a);
    for (char i = 4;i > -1;i--) {
        printf("[%d]\n", ((a / b) * b) - ((a / (b * 10)) * (b * 10)));
        b = b / 10;
    }
    return 0;
}