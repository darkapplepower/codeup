#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int **list = new int*[n];
    for(int i=0;i<n;i++){
        list[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        std::cin>>list[i][0];
    }
    for(int i=0;i<n;i++){
        std::cout<<list[i][0]<<' ';
        for(int j=1;j<=i;j++){
            list[i][j] = list[i][j-1] - list[i-1][j-1];
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}