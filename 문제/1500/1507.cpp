#include <iostream>
int main(){
    int p[100][100]={};
    int x1, x2, y1, y2, count=0;
    for(int i=0;i<4;i++){
        std::cin>>x1>>y1>>x2>>y2;
        for(x1++;x1<=x2;x1++){
            for(int j=y1+1;j<=y2;j++){
                if(!p[x1][j]){
                    p[x1][j]=1;
                    count++;
                }
            }
        }
    }
    std::cout<<count;
}