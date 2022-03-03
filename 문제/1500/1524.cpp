#include <iostream>
int main(){
    int list[9][9];
    int i, j, x, y, count=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            std::cin>>list[i][j];
        }
    }
    std::cin>>x>>y;
    x--;y--;
    
    if(list[x][y]){
        std::cout<<-1;
    }else{
        for(i=(x-1<0?0:x-1);i<=x+1&&i<9;i++){
            for(j=(y-1<0?0:y-1);j<=y+1&&j<9;j++){
                if(list[i][j]){
                    count++;
                }
            }
        }
        std::cout<<count;
    }
}