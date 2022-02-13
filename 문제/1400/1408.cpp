#include <iostream>
int main(){
    char a[21];
    std::cin>>a;
    for(int i=0;a[i];i++){
        std::cout<<(char)(a[i]+2);
    }
    std::cout<<'\n';
    for(int i=0;a[i];i++){
        std::cout<<(char)(a[i]*7%80+48);
    }
}