#include <iostream>
int main(){
    for(int j=1;j<10;j++){
        for(int i=2;i<6;i++){
            std::cout<<i<<' '<<'x'<<' '<<j<<' '<<'='<<' ';
            if(i*j<10){
                std::cout<<' ';
            }
            std::cout<<i*j<<'\t';
        }
        std::cout<<'\n';
    }
}