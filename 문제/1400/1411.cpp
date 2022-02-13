#include <iostream>
int main(){
    int a;
    std::cin>>a;
    int b=1, c=0;
    int d;
    for(int i=2;i<=a;i++){
        b += i;
        std::cin>>d;
        c += d;
    }
    std::cout<<(b-c);
}