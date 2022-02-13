#include <iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(i+j==n){
                std::cout<<i<<' '<<j<<'\n';
            }
        }
    }
}