#include <iostream>
int main() {
    int n, m, i, j, k, y, h = 0;
    std::cin >> m >> n;
    int** list = new int* [n];
    for (i = 0;i < n;i++) {
        list[i] = new int[m] {};
    }
    i = 0;
    j = -1;
    k = 0;
    y = 0;
    while (k < 2) {
        switch (h) {
        case 0:
            i--;
            if (i < 0 || list[i][j]) {
                k++;
                i++;
                h++;
            }
            else {
                k = 0;
            }
            break;
        case 1:
            j++;
            if (j >= m || list[i][j]) {
                k++;
                j--;
                h++;
            }
            else {
                k = 0;
            }
            break;
        case 2:
            i++;
            if (i >= n || list[i][j]) {
                k++;
                i--;
                h++;
            }
            else {
                k = 0;
            }
            break;
        case 3:
            j--;
            if (j < 0 || list[i][j]) {
                k++;
                j++;
                h=0;
            }
            else {
                k = 0;
            }
            break;
        }
        if (!k) {
            y++;
            list[i][j] = y;
        }
    }
    for (j = m-1;j >= 0;j--) {
        for (i = 0;i < n;i++) {
        
            std::cout << list[i][j] << ' ';
        }
        std::cout << '\n';
    }
}