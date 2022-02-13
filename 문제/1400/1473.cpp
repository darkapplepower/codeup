#include <iostream>
int main(){
    int n, m;
    std::cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if((n-i)%2){
                std::cout<<(n-i+1)*m-j<<' ';
            }else{
                std::cout<<(n-i)*m+j+1<<' ';
            }
        }
        std::cout<<'\n';
    }
}