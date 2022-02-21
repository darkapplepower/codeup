#include <iostream>
int main(){
    int n;
    int x, y;
    std::cin>>n;
    int **list = new int*[n];
    for(int i=0;i<n;i++){
        list[i]=new int[n];
    }
    std::cin>>x>>y;
    list[x-1][y-1] = 1;
    for(int i=0;i<n;i++){
        if(x-1 == i){
            continue;
        }
        list[i][y-1] = x - 1 - i;
        if(list[i][y-1]<0){
            list[i][y-1] *= -1;
        }
        list[i][y-1] += list[x-1][y-1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(y - 1 == j){
                continue;
            }
            list[i][j] = y - 1 - j;
            if(list[i][j]<0){
                list[i][j] *= -1;
            }
            list[i][j] += list[i][y-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}