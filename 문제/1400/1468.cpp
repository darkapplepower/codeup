#include <iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2){
                std::cout<<(i+1)*n-j<<' ';
            }else{
                std::cout<<i*n+j+1<<' ';
            }
        }
        std::cout<<'\n';
    }
}