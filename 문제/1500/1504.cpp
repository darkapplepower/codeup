#include <iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j%2){
                std::cout<<(j+1)*n-i<<' ';
            }else{
                std::cout<<j*n+i+1<<' ';
            }
        }
        std::cout<<'\n';
    }
}