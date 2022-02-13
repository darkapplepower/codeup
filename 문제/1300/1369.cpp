#include <iostream>
void printchars(char c, int n){
    for(int i=0;i<n;i++){
        std::cout<<c;
    }
}
int main(){
    int n, k;
    std::cin>>n>>k;
    if(n){
        printchars('*', n);
        std::cout<<'\n';
    }
    for(int i=1;i<n-1;i++){
        std::cout<<'*';
        for(int j=2;j<n;j++){
            if(!((i+j)%k)){
                std::cout<<'*';
            }else{
                std::cout<<' ';
            }
        }
        std::cout<<'*'<<'\n';
    }
    if(n!=1){
        printchars('*', n);
        std::cout<<'\n';
    }
}