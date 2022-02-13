#include <iostream>
int main(){
    int a[10];
    int b;
    for(int i=0;i<10;i++){
        std::cin>>a[i];
    }
    std::cin>>b;
    std::cout<<a[b-1];
}