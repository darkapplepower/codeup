#include <iostream>
int main(){
    int h, r;
    std::cin>>h>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<h;j++){
            for(int k=0;k<j;k++){
                std::cout<<' ';
            }
            std::cout<<'*'<<'\n';
        }
        for(int j=h-2;j>=0;j--){
            for(int k=0;k<j;k++){
                std::cout<<' ';
            }
            std::cout<<'*'<<'\n';
        }
    }
}