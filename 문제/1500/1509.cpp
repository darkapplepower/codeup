#include <iostream>
int main(){
    int d[11][10];
    int k;
    for(int i=0;i<11;i++){
        for(int j=0;j<10;j++){
            std::cin>>d[i][j];
        }
    }
    for(int j=0;j<10;j++){
        if(d[10][j]){
            std::cout<<(j+1);
            k=1;
            for(int i=9;i>=0;i--){
                if(d[i][j]<0){
                    std::cout<<" fall\n";
                    k=0;
                    break;
                }else if(d[i][j]>0){
                    std::cout<<" crash\n";
                    k=0;
                    break;
                }
            }
            if(k){
                std::cout<<" safe\n";
            }
        }
    }
}