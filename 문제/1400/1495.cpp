#include <iostream>
int main(){
    int n, m, x1, y1, x2, y2, u, k, i, j;
    int d[1001][1001], list2[1001][1001];
    std::cin>>n>>m>>k;
    for(i=0;i<k;i++){
        std::cin>>x1>>y1>>x2>>y2>>u;
        d[x1][y1] = d[x1][y1]+u;
        d[x2+1][y2+1] = d[x2+1][y2+1]+u;
        d[x1][y2+1] = d[x1][y2+1]-u;
        d[x2+1][y1] = d[x2+1][y1]-u;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            std::cout<<d[i][j]<<' ';
        }
        std::cout<<'\n';
    }
    std::cout<<'\n';
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            list2[i][j]=d[i][j];
            if(j){
                list2[i][j]+=list2[i][j-1];
            }
            for(k=0;k<i;k++){
                list2[i][j]+=d[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            std::cout<<list2[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}