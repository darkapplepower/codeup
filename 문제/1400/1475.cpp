#include <iostream>
int main(){
    int n, m;
    std::cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            if((m-j+1)%2){
                std::cout<<(m-j)*n+i+1<<' ';
            }else{
                std::cout<<(m-j+1)*n-i<<' ';
            }
        }
        std::cout<<'\n';
    }
}