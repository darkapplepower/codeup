#include <stdio.h>
int main() {
    int n1, n2, max = 0;
    scanf("%d", &n1);
    int* list1 = new int[n1];
    for (int i = 0;i < n1;i++) {
        scanf("%d", &list1[i]);
        if (list1[i] > max) {
            max = list1[i];
        }
    }
    int* list2 = new int[max + 1]{};
    for (int i = 0;i < n1;i++) {
        list2[list1[i]] = 1;
    }
    delete list1;
    scanf("%d", &n2);
    int* list3 = new int[n2];
    for (int i = 0;i < n2;i++) {
        scanf("%d", &list3[i]);
        if (list3[i] <= max && list2[list3[i]]) {
            list3[i] = 1;
        }
        else {
            list3[i] = 0;
        }
    }
    for (int i = 0;i < n2;i++) {
        printf("%d ", list3[i]);
    }
    delete list2;
    delete list3;
}