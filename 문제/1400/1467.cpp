#include <iostream>
int main(){
    int n, m;
    std::cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            std::cout<<n*(m-j)+i<<' ';
        }
        std::cout<<'\n';
    }
}