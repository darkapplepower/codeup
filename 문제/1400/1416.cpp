#include <iostream>
#include <string>
int main(){
    int a;
    std::cin>>a;
    int b[32]={0,};
    int i=0;
    while(a){
        if(a%2){
            b[i]=1;
        }
        a/=2;
        i++;
    }
    if(!i){
        i++;
    }
    for(i--;i>=0;i--){
        std::cout<<b[i];
    }
}