#include <iostream>
int main(){
    int n, m;
    std::cin>>n>>m;
    n = n*m;
    int *list = new int[n];
    for(int i=0;i<n;i++){
        std::cin>>list[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<list[i]<<' ';
        if(i&&!((i+1)%m)){
            std::cout<<'\n';
        }
    }
}