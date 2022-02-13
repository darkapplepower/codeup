#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int* k = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        std::cin>>k[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<k[(i+j)%n]<<' ';
        }
        std::cout<<'\n';
    }
}