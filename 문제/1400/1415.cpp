#include <iostream>
int main(){
    int a, b=0, c=0;
    for(int i=0;i<10;i++){
        std::cin>>a;
        if(a%2){
            if(a>b){
                b=a;
            }
        }else{
            if(a>c){
                c=a;
            }
        }
    }
    if(!c){
        std::cout<<b;
    }else if(!b){
        std::cout<<c;
    }else{
        std::cout<<b<<' '<<c;
    }
}