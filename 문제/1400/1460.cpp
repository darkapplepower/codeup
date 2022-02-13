#include <iostream>
int main(){
    int n, i, j;
    std::cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            std::cout<<i*n+j<<' ';
        }
        std::cout<<'\n';
    }
}