#include <iostream>
int main(){
    int n, i, j;
    std::cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            std::cout<<i*n-j<<' ';
        }
        std::cout<<'\n';
    }
}