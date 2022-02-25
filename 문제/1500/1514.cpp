#include <iostream>
void wtf(int list[7][7], int x, int y, int b){
    while(1){
        switch(b){
            case 0:
                x++;
                if(x>6){
                    return;
                }
                if(list[y][x]==2){
                    wtf(list, x, y, 3);
                    wtf(list, x, y, 1);
                }else{
                    list[y][x]=1;
                }
                break;
            case 1:
                y++;
                if(y>6){
                    return;
                }
                if(list[y][x]==2){
                    wtf(list, x, y, 2);
                    wtf(list, x, y, 0);
                }else{
                    list[y][x]=1;
                }
                break;
            case 2:
                x--;
                if(x<0){
                    return;
                }
                if(list[y][x]==2){
                    wtf(list, x, y, 3);
                    wtf(list, x, y, 1);
                }else{
                    list[y][x]=1;
                }
                break;
            case 3:
                y--;
                if(y<0){
                    return;
                }
                if(list[y][x]==2){
                    wtf(list, x, y, 2);
                    wtf(list, x, y, 0);
                }else{
                    list[y][x]=1;
                }
                break;
        }
    }
}
int main(){
    int a, b;
    int list[7][7] = {};
    std::cin>>a>>b;
    list[a-1][b-1]=2;
    std::cin>>a>>b;
    list[a-1][b-1]=2;
    std::cin>>a>>b;
    list[a-1][b-1]=2;
    wtf(list, -1, 3, 0);
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}