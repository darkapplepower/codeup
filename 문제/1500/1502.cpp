#include <iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            std::cout<<j*n+i<<' ';
        }
        std::cout<<'\n';
    }
}