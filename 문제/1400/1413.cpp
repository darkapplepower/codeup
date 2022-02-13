#include <iostream>
int main(){
    char a[101];
    std::cin.getline(a, 101);
    int i=0;
    while(a[i]){
        i++;
    }
    for(i--;i>=0;i--){
        std::cout<<a[i];
    }
}