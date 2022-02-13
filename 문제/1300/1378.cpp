#include <iostream>
int main(){
    int a, result=0;
    std::cin>>a;
    for(int i=1;i<=a;i++){
        result += i * (a-i+1);
    }
    std::cout<<result;
}