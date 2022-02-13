#include <iostream>
int main(){
    int k;
    std::cin>>k;
    int *b = (int*)malloc(k*sizeof(int));
    for(int i=0;i<k;i++){
        std::cin>>b[i];
    }
    for(int i=0;i<k;i++){
        std::cout<<b[i]<<'\n';
    }
    for(int i=0;i<k;i++){
        std::cout<<b[i]<<'\n';
    }
}