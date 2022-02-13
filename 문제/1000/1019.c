#include <stdio.h>
int main(){
    int year, month, date;
    scanf("%d.%d.%d", &year, &month, &date);
    printf("%04d.%02d.%02d", year, month, date);
    return 0;
}