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
    for (j = 0;j < m;j++) {
        for (i = n-1;i >= 0;i--) {
        
            std::cout << n*m-list[i][j]+1 << ' ';
        }
        std::cout << '\n';
    }
}