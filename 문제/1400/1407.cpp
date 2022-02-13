#include <iostream>
#include <stdio.h>
int main(){
    char a[101];
    std::cin.getline(a, 101, '\n');
    int i=0;
    while(a[i]){
        if(a[i]!=' '){
            std::cout<<a[i];
        }
    i++;
    }
}