#include <iostream>
struct Player{
    int x;
    int y;
    char* survive;
};
void explode(int list[10][10], int bombs[100][3], int index){
    int i, j;
    for(i=0;i<index;i++){
        for(j=0;j<=bombs[i][2];j++){
            if(bombs[i][0]+j>9){
                break;
            }
            if(list[bombs[i][0]+j][bombs[i][1]]==-1){
                break;
            }
            list[bombs[i][0]+j][bombs[i][1]]=-2;
        }
        for(j=0;j<=bombs[i][2];j++){
            if(bombs[i][0]-j<0){
                break;
            }
            if(list[bombs[i][0]-j][bombs[i][1]]==-1){
                break;
            }
            list[bombs[i][0]-j][bombs[i][1]]=-2;
        }
        for(j=0;j<=bombs[i][2];j++){
            if(bombs[i][1]+j>9){
                break;
            }
            if(list[bombs[i][0]][bombs[i][1]+j]==-1){
                break;
            }
            list[bombs[i][0]][bombs[i][1]+j]=-2;
        }
        for(j=0;j<=bombs[i][2];j++){
            if(bombs[i][1]-j<0){
                break;
            }
            if(list[bombs[i][0]][bombs[i][1]-j]==-1){
                break;
            }
            list[bombs[i][0]][bombs[i][1]-j]=-2;
        }
    }
}
int main(){
    int i, j, n, index=0;
    int list[10][10], bombs[100][3]={};
    struct Player* players;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            std::cin>>list[i][j];
            if(list[i][j]>0){
                bombs[index][0] = i;
                bombs[index][1] = j;
                bombs[index][2] = list[i][j];
                index++;
            }
        }
    }
    std::cin>>n;
    players = new Player[n];
    for(i=0;i<n;i++){
        std::cin>>players[i].x>>players[i].y;
    }
    explode(list, bombs, index);
    for(i=0;i<n;i++){
        if(list[players[i].x-1][players[i].y-1]){
            players[i].survive = "dead";
        }else{
            players[i].survive = "survive";
            list[players[i].x-1][players[i].y-1] = i+1;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
    std::cout<<"Character Information\n";
    for(i=0;i<n;i++){
        std::cout<<"player "<<(i+1)<<' '<<players[i].survive<<'\n';
    }
    delete players;
}